var selall = "<input type=checkbox id=sall onclick=selectAll()>";
var selme = "<input type=checkbox name=sme onclick=selectMe()>";
var action = "操作";
var allstr = "<a href=# onclick = delrow(this)>删除</a>|<a href=# onclick = editrow(this)> 修改</a>"
allstr = allstr+"|<a href=# onclick = insrow(this)> 插入</a>"
var title = new Array("选择" , "学号", "姓名", "性别","年龄", action);//表格单元格标题
var fun = new Array();
fun[0] = new Array(selall, "全部选中")
fun[1] = new Array(selme,"85687658", "ss", "男","20", allstr)
fun[2] = new Array(selme,"875758887","ddd", "男", "20", allstr)
fun[3] = new Array(selme,"78568758", "dfdf","女" ,"23", allstr)
var oldvalue;
document.write("<table id=mytable border = 1px align='center' rules='all' cellpadding = 5px cellspacing = '5'>");//输出表格开始
document.write("<tr>"); //单元格标题开始
    for (i = 0; i < title.length; i++)
    {
        document.write("<th>" + title[i] + "</th>");
    }
document.write("</tr>");    //单元格标题结束

for (var r = 0; r < fun.length; r++)
{
    document.write("<tr>");
    for (var c = 0; c < fun[r].length; c++)
    {
        if (r == 0 && c == 1)
        {
            document.write("<td colspan='5'>" + fun[r][c] + "</td>");
            continue;
        }
        document.write("<td>" + fun[r][c] + "</td>");
    }

    document.write("</tr>");
}

document.write("</table>");//输出表格结束
function selectAll()
{
    var selall = document.getElementById("sall");
    var selme = document.getElementsByName("sme");

    if(selall.checked)
        for (var i = 0; i < selme.length; i++)
        {
            selme[i].checked = true;
        }
    else
        for (var i = 0; i < selme.length; i++)
        {
            selme[i].checked = false;
        }
}
function selectMe()
{
    var selall = document.getElementById("sall");
    var selme = document.getElementsByName("sme");
    var flag;
    for (var j = 0; j < selme.length; j++)
    {
        if (!selme[j].checked)
        {
            flag = false;
            break;
        }
        else
            flag = true;
    }
    selall.checked=flag;
}

function delrow(that)
{
    var curRow = that.parentNode.parentNode.rowIndex;
    var objTable = document.getElementById("mytable");
    if (confirm("确定删除该行数据吗？"))
        objTable.deleteRow(curRow);
}

function editrow(that)
{
    var tdstr="<a href=# onclick=save(this)>保存</a>|";
    tdstr=tdstr+"<a href=# onclick=cancel(this)>取消</a>";

    var objTable=document.getElementById("mytable");
    var curRowIndex=that.parentNode.parentNode.rowIndex; //获取当前行序号
    var objTr=objTable.rows[curRowIndex];
    var myTd6 = objTr.cells.item(5);
    myTd6.innerHTML = tdstr;

    var td5 = objTr.cells.item(4);
    oldvalue=td5.innerHTML;
    var mystr = "<input type=text id=myprice value=" + oldvalue + ">";

    td5.innerHTML=mystr;
}

function cancel(that)
{
    var objTable = document.getElementById("mytable");
    var curRowIndex=that.parentNode.parentNode.rowIndex; //获取当前行序号
    var objTr=objTable.rows[curRowIndex];
    objTr.cells.item(5).innerHTML=allstr;
    objTr.cells.item(4).innerHTML=oldvalue;
}

function save(that)
{
    var objTable = document.getElementById("mytable");
    var curRowIndex=that.parentNode.parentNode.rowIndex; //获取当前行序号
    var objTr=objTable.rows[curRowIndex];
    var newPrice=document.getElementById("myprice").value;
    objTr.cells.item(5).innerHTML=allstr;
    objTr.cells.item(4).innerHTML=newPrice;
}

function insertROW()
{
    //获取表单元素的值，并且要检验输入的合法性
    var sid = document.getElementById("sid").value;
    if(sid=="")
    {
        alert("学号不能为空!");
        document.getElementById("sid").focus();
        return false;
    }
    
    var sname=document.getElementById("sname").value;
    if(sname.length<1)
    {
        alert("姓名不能为空!");
        document.getElementById("sname").focus();
        return false;
    }

    var sex;
    var ssex = document.getElementsByName("ssex");
    for (var i = 0; i < ssex.length; i++)
    {
        if(ssex[i].checked)
        {
            sex=ssex[i].value;
            break;
        }
    }
    var sage = document.getElementById("sage").value;

    //把表单内容追加到表格
    var objTable=document.getElementById("mytable");
    var objTr=document.createElement("tr");

    var td1 = document.createElement("td"); //选中单元格
    td1.innerHTML=selme;
    objTr.appendChild(td1);

    var td2 = document.createElement("td"); //学号
    td2.innerText=sid;
    objTr.appendChild(td2);

    var td3 = document.createElement("td"); //姓名
    td3.innerText=sname;
    objTr.appendChild(td3);

    var td4 = document.createElement("td"); //性别
    td4.innerText=sex;
    objTr.appendChild(td4);

    var td5 = document.createElement("td"); //年龄
    td5.innerText=sage;
    objTr.appendChild(td5);

    var td6 = document.createElement("td"); //操作
    td6.innerHTML=allstr;
    objTr.appendChild(td6);

    objTable.appendChild(objTr);

}


function insrow(that)
{
    var objTable = document.getElementById("mytable");
    var curRowIndex = that.parentNode.parentNode.rowIndex;
    var cols = objTable.rows[curRowIndex].cells.length;
    var sidStr = "<input type=text onblur=chkid(this)>";
    var snameStr = "<input type=text>";
    var sexStr = "<select><option value=男>男</option>";
    sexStr+="<option value=女>女</option></select>";
    var ageStr = "<input type=number min=18 max=28 value=20>";
    var delStr="<a href=# onclick=delrow(this)>删除</a>";
    var tdValue = new Array(selme, curRowIndex, sidStr, snameStr, sexStr, ageStr,delStr);
    var objTr=objTable.insertRow(curRowIndex);
    for (var i = 0; i < cols; i++)
    {
        var objTd = objTr.insertCell(i);
        objTd.innerHTML=tdValue[i]; 
        console.log(objTd);
    }
    
}
