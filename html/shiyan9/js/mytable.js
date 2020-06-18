var selall = "<input type=checkbox id=sall onclick=selectAll()>全选";
var selme = "<input type=checkbox name=sme onclick=selectMe()>选中";
var action = "操作";
var allstr = "<a href=# onclick = delrow(this)>删除</a> <a href=# onclick = editrow(this)> 修改</a>"
var title = new Array(selall ,"全选", "电影类型", "电影名称", "价格", action);//表格单元格标题
var fun = new Array();
fun[0] = new Array(selme,"选择","动作片", "导火线", "50", allstr)
fun[1] = new Array(selme, "选择","科幻片", "2012", "70", allstr)
fun[2] = new Array(selme, "选择","战争片", "我是战士", "60", allstr)
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
    var n_c;
    for (var c = 0; c < fun[r].length; c++)
    {
        document.write("<td>" + fun[r][c] + "</td>");
        n_c = c;
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
    var ObjTable = document.getElementById("mytable");
    if (confirm("确定删除该行数据吗？"))
        ObjTable.deleteRow(curRow);
}

function editrow(that)
{
    var tdstr="<a href=# onclick=save(this)>保存</a>|";
    tdstr=tdstr+"<a href=# onclick=cancel(this)>取消</a>";

    var ObjTable=document.getElementById("mytable");
    var curRowIndex=that.parentNode.parentNode.rowIndex; //获取当前行序号
    var ObjTr=ObjTable.rows[curRowIndex];
    var myTd6 = ObjTr.cells.item(5);
    myTd6.innerHTML = tdstr;

    var td5 = ObjTr.cells.item(4);
    oldvalue=td5.innerHTML;
    var mystr = "<input type=text id=myprice value=" + oldvalue + ">";

    td5.innerHTML=mystr;
}

function cancel(that)
{
    var ObjTable = document.getElementById("mytable");
    var curRowIndex=that.parentNode.parentNode.rowIndex; //获取当前行序号
    var ObjTr=ObjTable.rows[curRowIndex];
    ObjTr.cells.item(5).innerHTML=allstr;
    ObjTr.cells.item(4).innerHTML=oldvalue;
}

function save(that)
{
    var ObjTable = document.getElementById("mytable");
    var curRowIndex=that.parentNode.parentNode.rowIndex; //获取当前行序号
    var ObjTr=ObjTable.rows[curRowIndex];
    var newPrice=document.getElementById("myprice").value;
    ObjTr.cells.item(5).innerHTML=allstr;
    ObjTr.cells.item(4).innerHTML=newPrice;
}