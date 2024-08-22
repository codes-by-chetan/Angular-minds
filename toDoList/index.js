const taskInputEl = document.getElementById("task-input");
const taskInputBtn = document.getElementById("task-input-btn");
const taskDisplayConatiner = document.getElementById("task-display-conatiner");
const taskDeleteAllBtn = document.getElementById("task-deleteAll-btn");
let taskID = 3;
let tasks = [
    {
        id : 1,
        taskDesc : "do Something"
    },
    {
        id : 2,
        taskDesc : "do Something"
    },
    {
        id : 3,
        taskDesc : "do Something"
    }
];


document.addEventListener("DOMContentLoaded", function() {
    localCollect();
    displayTasks();
})

function displayTasks() {
    let tid,tdesc,istaskcomplete,iscompletetext;
    let todolist = document.createElement("li");
    taskDisplayConatiner.innerHTML = ""
    for (let i =0; i < tasks.length; i++){
        tid = tasks[i].id;
        tdesc = tasks[i].taskDesc;
        istaskcomplete = tasks[i].isCompleted;
        iscompletetext = istaskcomplete ? "checked":"";
        todolist = `<div class="task" id="task-${tid}">
                        <p>${tdesc}</p>
                        <div>
                            <input type="checkbox" class="mark-${istaskcomplete}" name="mark-${tid}" id="mark-${tid}" onclick="marker(${tid})" ${iscompletetext}>
                            <label for="mark-${tid}">Mark task as complete</label><br>
                        </div>
                        <button class="delete-this" onclick="removeTask(${tid})">Delete</button>
                        <button class="edit-this" onclick="editTask(${tid}, this)">Edit</button>
                    </div>`;
        taskDisplayConatiner.innerHTML += todolist;
    }
}
function localCollect() {
    temptasks = JSON.parse(localStorage.getItem("tasks"));
    temptaskID = JSON.parse(localStorage.getItem("taskID"));

    if (temptasks != null && temptaskID != null){
        tasks = temptasks;
        taskID = temptaskID;
    } else {
        if (temptasks == null) {
            console.log("No tasks Found in local storage");
        }
        if (temptaskID == null) {
            console.log("No taskID  found in local storage");
        }
        tasks = [];
        taskID =0;
    }
    displayTasks();
}

function localSave() {
    localStorage.setItem("tasks",JSON.stringify(tasks));
    localStorage.setItem("taskID",JSON.stringify(taskID));
    localCollect();
}

function taskSave(inputValue){
    taskID++;
    tasks.push({
        id : taskID,
        taskDesc : inputValue,
        isCompleted : false
    });
    localSave();
}

function removeTask(tid) {

    console.log(tasks,tid, typeof tid);
    if (tid === 'all') {
        localStorage.removeItem("tasks");
        localStorage.removeItem("tasks");
        localCollect()
    } else {
        for(let i = 0; i < tasks.length; i++){
            console.log("looking for matching id ");
            if (tasks[i].id === tid){
                console.log("match found");
                tasks.splice(i , 1);
                console.log("delete task of id ", tid);
                break;
            }
        }
        localSave();
    }
}

function editTask(tid, btn) {
    let tdesc,istaskcomplete,iscompletetext;
    const taskEl = btn.parentElement.parentElement;
    taskEl.innerHTML = "";
    let editEl;
    for(let i = 0; i < tasks.length; i++){
        console.log("looking for matching id ");
        if (tasks[i].id === tid){
            tdesc = tasks[i].taskDesc;
            istaskcomplete = tasks[i].isCompleted;
            iscompletetext = istaskcomplete ? "checked":"";
            console.log("match found");
            editEl = `<label class="edit-task-input-label" for="task-${tid}-input">Edit your task and hit Save</label>
                        <input type="text" class="edit-task-input" id="task-${tid}-input" name="task-${tid}-input" value="${tdesc}" />
                        <input type="checkbox" class="edit-task-checkbox" id="task-${tid}-checkbox" name="task-${tid}-checkbox" value="" ${iscompletetext}>
                        <label class="edit-task-checkbox-label" for="task-${tid}-checkbox">Mark task as complete</label>
                        <button onclick="saveEditedTask(${tid}, this)">Save</button>`;
            
        
        } else {
            let temptid = tasks[i].id;
            tdesc = tasks[i].taskDesc;
            istaskcomplete = tasks[i].isCompleted;
            iscompletetext = istaskcomplete ? "checked":"";
            editEl = `<div class="task" id="task-${temptid}">
                            <p>${tdesc}</p>
                            <div>
                                <input type="checkbox" class="mark-${istaskcomplete}" name="mark-${temptid}" id="mark-${temptid}" onclick="marker(${temptid})" ${iscompletetext}>
                                <label for="mark-${temptid}">Mark task as complete</label><br>
                            </div>
                            <button class="delete-this" onclick="removeTask(${temptid})">Delete</button>
                            <button class="edit-this" onclick="editTask(${temptid}, this)">Edit</button>
                        </div>`;
            
        }
        taskEl.innerHTML += editEl;
    }
    
}
function saveEditedTask(tid, btn) {
    let tdesc,istaskcomplete;
    const newInputEl = document.getElementById(`task-${tid}-input`);
    const newCheckEl = document.getElementById(`task-${tid}-checkbox`);
    tdesc = newInputEl.value;
    istaskcomplete = newCheckEl.checked;
    console.log("type of iscomplte",typeof istaskcomplete);
    for(let i = 0; i < tasks.length; i++){
        console.log("looking for matching id ");
        if (tasks[i].id === tid){
            tasks[i].taskDesc = tdesc;
            tasks[i].isCompleted = istaskcomplete;
            console.log("task edited id : ",tid);
            break;
        }
    }
    localSave();
}



function inputvalidator( inputValue ) {
    if(/^\s+$/.test(inputValue) || inputValue === ""){
        return false
    } 
    return true
}

taskInputBtn.addEventListener("click", function() {
    let inputValue = taskInputEl.value;
    if (inputvalidator( inputValue )) {
        taskSave(inputValue);
        displayTasks();
        taskInputEl.value = ""
    }
})

taskDeleteAllBtn.addEventListener("click", function() {
    removeTask('all');
})

function marker(tid){
    let istaskcomplete = document.getElementById(`mark-${tid}`).checked;
    for(let i = 0; i < tasks.length; i++){
        console.log("looking for matching id ");
        if (tasks[i].id === tid){
            tasks[i].isCompleted = istaskcomplete;
            console.log("task mark updated id : ",tid);
            break;
        }
    }
    localSave()
}