window.onload=function()
{
	for(var i=1;i<12;i++)
	{
		var objImg=document.getElementById(i);
		objImg.ondragstart=function(e)
		{
			var objID=e.target.id;
			e.dataTransfer.setData("ID",objID);
		}
	}
	var container1=document.getElementById("blbtop");
	var container2=document.getElementById("bmbtop");
	var container3=document.getElementById("brbtop");
	var container4=document.getElementById("lbbottom");
	var container5=document.getElementById("rbbottom");
	// var container=new Array("blbtop","bmbtop","brbtop","lbbottom");
	// for(var i=0;i<4;i++)
	// {
	// 	var objDiv=document.getElementById(container[i]);
	// 	objDiv.ondragenter=function(e)
	// 	{
	// 		alert(objDiv.id);
	// 		e.preventDefault();
	// 	}
	// 	objDiv.ondragover=function(e)
	// 	{
	// 		e.preventDefault();
	// 	}
	// 	objDiv.ondrop=function(e)
	// 	{
	// 		var objId=e.dataTransfer.getData("ID");
	// 		obj=document.getElementById(objId);
	// 		alert(objDiv.id);
	// 		objDiv.appendChild(obj);
	// 	}
	// }
	container1.ondragenter=function(e)
	{
		e.preventDefault();
	}
	container1.ondragover=function(e)
	{
		e.preventDefault();
	}
	container1.ondrop=function(e)
	{
		var objId=e.dataTransfer.getData("ID");
		var obj=document.getElementById(objId);
		container1.appendChild(obj);
	}
	container2.ondragenter=function(e)
	{
		e.preventDefault();
	}
	container2.ondragover=function(e)
	{
		e.preventDefault();
	}
	container2.ondrop=function(e)
	{
		var objId=e.dataTransfer.getData("ID");
		var obj=document.getElementById(objId);
		container2.appendChild(obj);
	}
	container3.ondragenter=function(e)
	{
		e.preventDefault();
	}
	container3.ondragover=function(e)
	{
		e.preventDefault();
	}
	container3.ondrop=function(e)
	{
		var objId=e.dataTransfer.getData("ID");
		var obj=document.getElementById(objId);
		container3.appendChild(obj);
	}
	container4.ondragenter=function(e)
	{
		e.preventDefault();
	}
	container4.ondragover=function(e)
	{
		e.preventDefault();
	}
	container4.ondrop=function(e)
	{
		var objId=e.dataTransfer.getData("ID");
		var obj=document.getElementById(objId);
		container4.appendChild(obj);
	}
	container5.ondragenter=function(e)
	{
		e.preventDefault();
	}
	container5.ondragover=function(e)
	{
		e.preventDefault();
	}
	container5.ondrop=function(e)
	{
		var objId=e.dataTransfer.getData("ID");
		var obj=document.getElementById(objId);
		obj.style.display="none";
	}
}