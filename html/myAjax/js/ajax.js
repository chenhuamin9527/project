var xmlhttp;
function createXMLHttp()
{
    if(window.ActiveXObject)
    {
        xmlhttp = new ActiveXObject();//IE浏览器创建xmlhttprequest;
    }
    else
    {
        xmlhttp = new XMLHttpRequest("Microsoft.XMLHTTP");
    }
}
function sendRequest()
{
    var city = document.getElementById("city").value;
    var URL="http://wthrcdn.etouch.cn/weather_mini?city="+city;
    createXMLHttp();
    xmlhttp.onreadystatechange = callback;
    xmlhttp.open("GET",URL,true);
    xmlhttp.send();
}
function callback()
{
    if(xmlhttp.readyState == 4)
        if(xmlhttp.status == 200)
        {
            //console.log(xmlhttp.responseText);
            var weather = eval("("+xmlhttp.responseText+")");
            console.log(weather);
            //console.log(weather.status);
            if(weather.status==1000)
            {
                var mydiv = document.getElementById("result");
                var city = weather.data.city;
                var ww = weather.data.forecast[0].type;
                mydiv.innerHTML = city + ":今天的天气是:"+ ww;
            }
        }
}