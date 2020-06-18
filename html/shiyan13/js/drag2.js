window.onload = function()
{
    var objDiv1 = document.createElement("div");
    objDiv1.style.width = "200px";
    objDiv1.style.height = "250px";
    objDiv1.style.border = "1px solid red";
    objDiv1.style.margin = "0 auto";
    document.body.appendChild(objDiv1);

    var objDiv2 = document.createElement("div");
    objDiv2.style.width = "200px";
    objDiv2.style.height = "250px";
    objDiv2.style.border = "1px solid blue";
    objDiv2.style.margin = "0 auto";
    objDiv2.style.marginTop = "5px";
    document.body.appendChild(objDiv2);

    var myimg = document.createElement("img");
    myimg.src = "img/1.jpg";
    myimg.draggable = true;
    objDiv2.appendChild(myimg);
    //被拖拽的对象相关事件
    myimg.ondragstart = function(e)
    {
        console.log(e.type);
        console.log("开始拖动");
    }
    myimg.ondrag = function(e)
    {
        console.log(e.type);
        //console.log("拖动过程中");
    }
    myimg.ondragend = function(e)
    {
        console.log(e.type);
        console.log("拖拽结束");
    }
    //承载区事件
    objDiv1.ondragenter = function(e)
    {
        console.log(e.type);
        console.log("进入投放区");
        //阻止默认事件
        e.preventDefault();
    }
    objDiv1.ondragover = function(e)
    {
        e.preventDefault();
        //console.log("移动");
    }
    objDiv1.ondragleave = function(e)
    {
        e.preventDefault();
        console.log("离开投放区");
    }
    objDiv1.ondrop = function(e)
    {
        console.log(e.type);
        objDiv1.appendChild(myimg);
    }
    objDiv2.ondragenter = function(e)
    {
        e.preventDefault();
    }
    objDiv2.ondragover = function(e)
    {
        e.preventDefault();
    }
    objDiv2.ondrop = function(e)
    {
        objDiv2.appendChild(myimg);
    }
}