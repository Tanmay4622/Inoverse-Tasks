const inputbox = document.getElementById("inputbox");
const listcontainer = document.getElementById("list-container");

function addtask(){
  let li = document.createElement("li");
  li.innerHTML = inputbox.value;
  listcontainer.appendChild(li);
  let cross = document.createElement("cross");
  cross.innerHTML = "\u00d7";
  li.appendChild(cross);
  inputbox.value = "";
  savedata();
}

listcontainer.addEventListener("click", function(e){
  if(e.target.tagName === "LI"){
    e.target.classList.toggle("checked");
    savedata();
  }
  else if(e.target.tagName === "CROSS"){
    e.target.parentElement.remove();
    savedata();
  }
})

function savedata(){
  localStorage.setItem("data", listcontainer.innerHTML);
}

function showlist(){
  listcontainer.innerHTML = localStorage.getItem("data");
}
showlist();

document.addEventListener('DOMContentLoaded', function() {
  const editableDiv = document.getElementById('list-container');

  editableDiv.addEventListener('dblclick', function() {
    editableDiv.contentEditable = true;
    editableDiv.focus();
  });

  document.addEventListener('click', function(event) {
    if (!editableDiv.contains(event.target) && editableDiv.contentEditable === 'true') {
      editableDiv.contentEditable = false;
    }
    savedata();
  });
});