const newPlayerDiv = document.getElementById("new-player-div");
const playerDisplayDiv = document.getElementById("player-display-container")
const addPlayerBtn = document.getElementById("player-add-btn");
const messageDiv = document.getElementById("message-new-player");
const playerListEl = document.getElementById("players-list");

let playerInfo = [];

document.addEventListener("DOMContentLoaded" , localFetch());

function localSave() {
    localStorage.setItem("players", JSON.stringify(playerInfo))
   localFetch();
}

function localFetch() {
    tempplayerInfo = JSON.parse(localStorage.getItem("players"));
    console.log(playerInfo);
    if (tempplayerInfo) {
        playerInfo = tempplayerInfo
    } else {
        playerInfo = []
    }
    displayPlayers();
}

function displayPlayers() {
    let pName, pAge, pType, pRow;
    playerListEl.innerHTML = "";
    if (playerInfo.length == 0) {
        playerListEl.innerHTML = `<p>No players are added </p>`
    }

    for (let i = 0; i < playerInfo.length; i++){
        pName = playerInfo[i].name;
        pAge = playerInfo[i].age;
        pType = playerInfo[i].playerType;
        pRow = `<li class="player">
                    <p class="player-index">${i+1}).</p>       
                    <p class="player-name">${pName}</p>
                    <p class="player-age">${pAge}</p>
                    <p class="player-type">${pType}</p>
                    <div id="close-msg" onclick="delPlayer(${i})"><i class="fa-solid fa-circle-minus"></i></div>
                </li>`;
        playerListEl.innerHTML += pRow;

    }
}

function saveNewPlayer() {
    const pname = document.getElementById("new-player-name-input").value;
    const page = parseInt(document.getElementById("new-player-age-input").value);
    const bat = document.getElementById("new-player-type-batsman-input").checked;
    const bowl = document.getElementById("new-player-type-bowler-input").checked;
    let tName, tAge, tType, message;
    let pType = bat && bowl ? "All Rounder" : bat ? "Batsman" : bowl ? "Bowler" : "Unspecified";
    let flag = true;

    if (pname === '') {
        flag = false;
        message = "All fields are mandatory";
    } else if (page === 0) {
        flag = false;
        message = "All fields are mandatory";
    } else if (pType === "Unspecified") {
        flag = false;
        message = "All fields are mandatory";
    }

    for (let i = 0; i < playerInfo.length; i++){
        tName = playerInfo[i].name;
        tAge = playerInfo[i].age;
        tType = playerInfo[i].playerType;
        if (tName.toLowerCase() == pname.toLowerCase() && tAge == page) {
            flag = false;
            message = "This player is already exist"
        }

    } 

    if (playerInfo.length >= 11) {
        flag = false;
        message = "Team Full : 11 players are already added"
    }
    if (flag) {
        playerInfo.push({
            name : pname,
            age: page,
            playerType : pType
        })
    
        localSave();
    
        console.log(pname, page, bat, bowl, pType);
        console.log(playerInfo)
        displayPlayersDiv()
    } else {
        messageDiv.innerHTML = `<p>
                                    ${message}
                                </p>
                                <div id="close-msg" onclick="closeMsg()"><i class="fa-solid fa-xmark"></i></div>`;
        messageDiv.style.display = "flex";
    }
    
    
}

function ageInputAdjust(n) {
    const ageInputEl = document.getElementById("new-player-age-input");
    newVal = parseInt(ageInputEl.value) + n;
    if (newVal >= 0) {
        ageInputEl.value = newVal;
    } else {
        ageInputEl.value = 0;
    }
}

function displayNewPlayerDiv() {
    playerDisplayDiv.style.display = "none"
    newPlayerDiv.style.display = "flex";
    messageDiv.style.display = "none";
};

function displayPlayersDiv() {
    document.getElementById("new-player-name-input").value = '';
    document.getElementById("new-player-age-input").value = 0
    document.getElementById("new-player-type-batsman-input").checked = false;
    document.getElementById("new-player-type-bowler-input").checked = false;
    newPlayerDiv.style.display = "none";
    playerDisplayDiv.style.display = "flex";
};

function closeMsg() {
    messageDiv.style.display = "none";
}

function delPlayer(i) {
    if (i === "all") {
        localStorage.removeItem("players")
    } else {
        playerInfo.splice(i, 1);
    }
    localSave();
}