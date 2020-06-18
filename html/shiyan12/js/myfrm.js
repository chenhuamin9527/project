function submitFrm()
{
    var objFrm=document.getElementById("myfrm");
    console.log(objFrm);
    objFrm.method="get";
    objFrm.action="get.html";
    objFrm.submit();
}
function sendValue()
{

    var sid = document.getElementById("sid").value;
    var sname = document.getElementById("username").value;
    var ssex = document.getElementsByName("sex");
    var fileValue = document.getElementById("myfile").value;
    console.log("文件的路径是：" + fileValue+"\n");
    var index1 = fileValue.lastIndexOf(".");
    console.log(index1);
    var fileExt = fileValue.substring(index1+1);
    console.log("文件扩展名是：" + fileExt);
    var index2 = fileValue.lastIndexOf("\\");
    console.log(index2);
    var fileName = fileValue.substring(index2+1, index1);
    console.log(fileName);
    var sex;
    for (var i = 0; i < ssex.length; i++)
    {
        if(ssex[i].checked)
            sex = ssex[i].value;
    }
    var URL = "get.html?id=" + sid + "&name=" + sname + "&sex=" + sex + "&fileName=" + fileName + "&fileExt=" + fileExt;
    window.location.href = URL;
}