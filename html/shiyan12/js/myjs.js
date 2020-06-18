window.onload = function()
{
    var frmValue = window.location.search;
    frmValue = decodeURIComponent(frmValue);
    frmValue = frmValue.substring(1);
    // document.write(frmValue+"</br>");
    // var urlValue = frmValue.split("&");
    // console.log(urlValue);
    // for (var i = 0 ; i < urlValue.length; i++)
    // {
    //     var name = urlValue[i].split("=")[0];
        
    //     var value = urlValue[i].split("=")[1];
        
    //     document.write(name + ":" + value + "</br>");
    // }

    // var urlValue = frmValue.split(/=|&/);
    // console.log(urlValue);
    // for(var i = 0; i < urlValue.length; i = i + 2)
    // {
    //     document.write(urlValue[i] + ":" + urlValue[i+1] + "</br>");
    // }

    var person = new Object();
    var urlValue = frmValue.split("&");
    for (var i = 0; i < urlValue.length; i++)
    {
        person[urlValue[i].split("=")[0]] = urlValue[i].split("=")[1];
    }
    console.log(person);
    for (p in person)
    {
        document.write(p + ":" + person[p] + "</br>");
    }
}