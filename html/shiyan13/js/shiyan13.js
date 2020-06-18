window.onload = function()
{
    var imgDiv = document.createElement("div");//创建放图片的DIV
    imgDiv.style.width = "600px";
    imgDiv.style.height = "220px";
    imgDiv.style.border = "1px solid red";
    imgDiv.style.margin = "0 auto";
    document.body.appendChild(imgDiv);
    var a1 = document.createElement("table");
    imgDiv.appendChild(a1);
    var a2 = document.createElement("tr");
    
    a1.appendChild(a2);
    var a3 = document.createElement("td");
    
    a2.appendChild(a3);
    //放3张图片到imgDIV
    for(var i = 1; i < 12; i++)
    {
        var objImg = document.createElement("img");
        objImg.src = "img/" + i + ".jpg";
        objImg.draggable = true;
        objImg.id = i;
        objImg.ondragstart = function(e)
        {
            var objID = e.target.id
            e.dataTransfer.setData("ID",objID);
        }
        imgDiv.appendChild(objImg);
    }
    //承载区DIV
    var containerDiv = document.createElement("div");
    containerDiv.style.width = "600px";
    containerDiv.style.height = "220px";
    containerDiv.style.border = "1px solid blue";
    containerDiv.style.margin = "0 auto";
    containerDiv.style.marginTop = "5px";

    containerDiv.ondragenter = function(e)
    {
        e.preventDefault();
    }

    containerDiv.ondragover = function(e)
    {
        e.preventDefault();
    }

    containerDiv.ondrop = function(e)
    {
        var objId = e.dataTransfer.getData("ID");
        var obj = document.getElementById(objId);
        containerDiv.appendChild(obj);
    }
    document.body.appendChild(containerDiv);
    
}