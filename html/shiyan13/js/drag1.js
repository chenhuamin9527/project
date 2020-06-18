window.onload = function()
{
    var objDiv = document.createElement("div");
    objDiv.style.width = "100px";
    objDiv.style.height = "100px";
    objDiv.style.border = "1px solid blue";
    objDiv.style.backgroundColor = "#ff0000";
    objDiv.style.position = "absolute";
    document.body.appendChild(objDiv);
    objDiv.onmousedown = function(e)
    {
        document.onmousemove = function(e)
        {
            // console.log(e.clientX);
            // console.log(e.clientY);
            objDiv.style.left = e.clientX + "px";
            objDiv.style.top = e.clientY + "px";
        }
        if(e.button == 2)
        {
            document.oncontextmenu = function(e)
            {
                e.preventDefault();
            }
            document.onmousemove = function(e)
            {
                e.preventDefault();
            }
        }
    }
}