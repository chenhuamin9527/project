```
<标签>
    内容
</标签>
```
- 标签通常都是成对出现
- 内容是一些纯文本文字或子标签
- HTML元素指的是从开始标签到结束标签的所有代码
---
- HTML文档结构是由\<html>\<head>和\<body>这三大元素组成。
- \<html>元素:HTML文档以\<html>标签开始，以\</html>标签结束，文档的所有内容都需要放在这两个标签之间。
- \<head>元素:页面头部信息，用于向浏览器提供整个页面的基本信息，但不包含页
    面的主体内容。头部信息中主要包括页面的标题、信息、CSS样 JavaScript式、空
    本等元素。页面头部信息通常并不在浏览器中显示，标题元素（\<title>\<title>标签的内容）除外，会显示在浏览器窗口的左上角。
- \<body>元素:网页的正文，是用户在浏览器主窗口中看到的信息，包括图片、表格
    段落、图片、视频等内容，且须位于\<body>标签之内；但并不是所有的\<body>内标签都是可见的。
- \<html>\<head>和\<body>是HTML文档的基本元素，三者共同构成了HTML文档
---
- HTML不区分大小写,XHTML区分大小写
- HTML页面中字符之间的一个或多个连续空格(包括空格中的制表符、换行符和回车)，只能显示为一个空格
  - 如果需要更多空格，可以使用实体引用(&nbsp)或者中文空格
- HTML中的注释
```
<!-- 注释内容 -->
```
- 标签可以嵌套使用
---
- HTML5文档类型声明
```
<! DOCTYPE html>
```
- meta元素

属性名|属性值|描述
--|--|--
name|keywords|定义页面的关键词。使用 content属性提供网页的关键词，关键词之间用英文逗号“，”隔开
name|description|定义页面的描述内容。使用 content属性提供网页的描述内容，但不要过长，否则搜索引擎会以“…”省略
name|robots|用来告诉搜索引擎页面是否允许索引与查询。 content的参数有all、none、 index、 noindex、 follow、 nofollow，默认是all
name|author|标注网页的作者
http-equiv|content-type|设定页面使用的字符集。例如代码 .\<meta http-equiv=" Content-Type"content="text/html； charset = utf-8"/> 表示将页面的编码方式设为utf-8
http-equiv|refresh|设定页面使用的字符集。例如代码 .\<meta http-equiv="Content-Type"content="text/html; charset=utf-8"/>表示将页面的编码方式设为utf-8
http-equiv|set-cookie|自动刷新并转到新页面。使用 content属性提供刷新或跳转的时间以及跳转的目标地址
http-equiv|expires|设置页面缓存过期时间。如果网页过期那么存盘的 cookie将被删除用于设定网页的到期时间。一旦网页过期，必须从服务器上重新加载页面内容
content|text|内容文本。用于描述name或http-equiv属性的相关内容
---
- 标题标签
  - HTML有6级标题标题，从一级开始，逐渐降低为六级，分别为\<h1>\<h2>\<h3>\<h4>\<h5>\<h6>

标签|描述
--|--
\<font>...\</font>|用于设置文本的字体样式
\<b>...\</b>|元素中的内容以加粗的方式显示，效果与< strong>标签相同
\<i>...\</i>|元素中的内容以斜体的方式显示
\<s>...\</s>|元素中的内容将被添加一条删除线
\<u>...\</u>|元素中的内容将被添加一条下画线
\<sup>...\</sup>|元素中的内容以上标的形式显示
\<sub>...\</sub>|元素中的内容以下标的形式显示
\<strong>...\</strong>|元素中的内容以加粗的方式显示，与<b>标签功能一致
\<big>...\</big>|元素中的内容在显示时比周围的文本大一个字体尺寸
\<small>...\</small>|元素中的内容在显示时比周围的文本小一个字体尺寸
---

特殊字符|实体引用|特殊字符|实体引用
--|--|--|--
双引号(&quot;)|\&quot;|左箭头(&larr;)|\&larr;
&amp;号|\&amp;|上箭头(&uarr;)|\&uarr;
空格|\&nbsp;|右箭头(&rarr;)|\&rarr;
小于号(&lt;)|\&lt;|下箭头(&darr;)|\&darr;
大于号(&gt;)|\&gt;|左右箭头(&harr;)|\&harr;
小于等于(&le;)|\&le;|左下箭头(&crarr;)|\&crarr;
大于等于(&ge;)|\&ge;|左双箭头(&lArr;)|\&lArr;
版权号(&copy;)|\&copy;|上双箭头(&uArr;)|\&uArr;
商标符号(&trade;)|\&trade;|右双箭头(&rArr;)|\&rArr;
注册商标(&reg;)|\&reg;|下双箭头(&dArr;)|\&dArr;
分数(&frac14;)|\&frac14;|交集(&cap;)|\&cap;
分数(&frac12;)|\&frac12;|并集(&cup;)|\&cup;
---
- 段落标签\<p>。\<p>标签是HTML中特定得段落标签，可以对网页内容提供块级格式。当浏览器解析\<p>标签时，通常在下一个段落之前插入一个新的空白行。
- 换行标签\<br />
- 水平线标签\<hr />
- 有序列表
```
<ol>
  <li>列表项1</li>
  <li>列表项2</li>
  ...
</ol>
```
- 通过type属性可以指定有序列表编号的样式:
1(1,2,3...),a(a,b,c...),A(A,B,C..),i(i,ii,iii...),I(I,II,III...)
```
<!--使用大写字母ABC，从第三个开始，即C-->
<ol type= "A" start = "3">
  <li>hello</li>
  <li>world</li>
</ol>
```
- 无序列表
```
<ul type="">
  <li>列表项1</li>
  <li>列表项2</li>
  ...
</ul>
```
- type属性用于设置列表的图形前缀，可以是circle（圆）、disc（点）、square（方块）、none
---
- 定义列表
```
<dl>
  <!-- 第1项开始 -->
  <dt>标题1</dt>
  <dd>描述1</dd>
  <!-- 第1项结束 -->

  <!-- 第2项开始 -->
  <dt>标题2</dt>
  <dd>描述2</dd>
  <!-- 第2项结束 -->
</dl>
```
- \<div> 标签属于块级元素 
```
<div style = "块元素的样式" class = "类选择器名称" align = "对齐方式">
  内容部分
</div>
```
- style属性用于设置div元素的行内样式
- class属性用于引用CSS的类选择器
- align属性用于设置div元素中内容对齐方式，取值范围为left、right、center

- \<span> 标签属于行内元素 
```
<span style = "块元素的样式" class = "类选择器名称" align = "对齐方式">内容部分</span>
```
- style属性用于设置span元素的行内样式
- class属性用于引用CSS的类选择器
- align属性用于设置span元素中内容对齐方式，取值范围为left、right、center
---
- 统一资源定位符(Uniform Resource Locator,URL)
- 绝对路径指完整路径,如：http://www.itshixun.com/movie/index.html
或d:/web/movie/index.html
- 相对路径
---
- 图像标签
```
<img src = "url" alt = ""../>
```
- src属性值是指向图像的文件的URL地址，绝对路径或相对路径都可以
- alt属性用于图像的文本描述，当图片无法显示是会显示该文本内容
---
属性名|描述
--|--
src|图像的地址。可以是绝对URL，也可以是相对URL
alt|图像的文本描述。浏览器无法显示图像时，该文本作为图像的替代；描述文本能够更好地帮助搜索引擎对页面进行索引
height|指定图像的高度。可以是固定值，也是百分比（占外层容器的百分比）
width|指定图像的宽度。可以是固定值，也是百分比（占外层容器的百分比）
align|图像的对齐方式。如top、 bottom、 middle、left、 right
border|指定图像边框的宽度
---
- 超链接标签
```
<a href = "url" name = "" target = "">链接内容</a>
```
- \<a>标签的title属性用于给链接添加biaot
- 目标锚点
```
<a id = "myAnchor">自己创建的锚点位置</a>
```
```
<a href = "# myAnchor">链接到锚点位置</a>
```
- 跨页面的锚点链接，href属性
```
<a href = "/chapter01/anchorLinkDemo.html" # myAnchor></a>
```
- 图片链接，只需将\<img/>标签放在\<a>和\</a>之间即可

- 空链接
```
<a href = "#" >空连接 </a>
```

- Email链接
```
<a href = "mailto:guoqy@itshixun.com">联系我们</a>
```

- 超链接的target属性

---
值|描述
--|--
_blank|在新窗口中打开被链接文档
_self|默认值。在相同的框架中打开被链接文档
_parent|在父框架集中打开被链接文档
_top|在整个窗口中打开被链接文档
frameName|在指定的框架中打开被链接文档
---
- 实例
```
<a href = "http://www.itshixun.com" target = "_blank">新窗口打开目标链接</a>
```
- 表格的组成
- 语法
```
<table>
  <!-- 一行可以包含多个单元格 -->
  <tr>
    <td>单元格内容</td>
    <td>单元格内容</td>
    <!-- 更多单元格 -->
    ...
  </tr>
  <!-- 更多行 -->
  ...
</table>
```
- 表格的各组成部分均包含在\< table>标签之内；
- 单元格是表格的基本元素，使用\<td>标签表示
- 行是表格的水平元素，使用\<tr>标签表示；
- 一行可以由一个或多个单元格构成，而一个表格可以由一行或多行构成。
---
- 表格常用属性

---
属性名|取值|描述
--|--|--
align|left、center、right|设置表格相对周围元素的对齐方式
bgcolor|rgb（x，x，x）、＃ xxxxxx、 colorName|设置表格的背景颜色
border|像素|设置表格边框的宽度
cellpadding|像素或百分比|设置单元格与其内容之间的距离
cellspacing|像素或百分比|设置单元格之间的距离
height|像素或百分比|设置表格的高度
width|像素或百分比|设置表格的宽度
rules|none、groups、rows、cols、all|设置表格中的表格线显示方式，默认是all
border|指定图像边框的宽度
frame|void、 above、 below、 hsides、 vsides、hs、rhs、
box、border|设置表格外部边框的显示方式
---
- frame属性列表
---
属性|描述
--|--
void|不显示边框
above|只显示顶部边框
below|只显示底部边框
hsides|显示顶部和底部边框
vsides|只显示左右两侧边框
lhs|只显示左侧边框
rhs|只显示右侧边框
box或border|显示表格的所有边框(不指定frame属性时的默认边框)
---

- 单元格属性
---
属性|描述
--|--
align|设置单元格内容的水平对齐方式:left、center、right、justify
valign|设置单元格内容的垂直对齐方式:top、middle、bottom、baseline
rowspan|设置单元格跨越的行数
colspan|设置单元格跨越的列数
scope|定义将表头数据与单元数据相关联的方法
width|设置单元格的宽度
height|设置单元格的高度
bgcolor|设置单元格的背景颜色
---

- 行标签常用的属性
---
属性|描述
--|--
align|设置单元格内容水平对齐方式:left、center、right、justify
valign|设置单元格内容垂直对齐方式:top、middle、bottom、baseline
bgcolor|设置单元格的背景颜色
bordercolor|设置行内单元格的边框颜色
bordercolordark|设置行内单元格的左上边框颜色
bordercolorlight|设置行内单元格的右下边框颜色
---
- 表格的行分组
  - \< thead>标签定义表头，用于创建表格的头部信息；
  - \< tfoot>标签定义表尾，用于创建表格的脚注部分；
  - \< tbody>标签定义表格主体，用于表示表格的主体部分；
  - \< caption>标签定义表格标题，显示在整个表格的上方。

- \<colgroup>标签的属性
---
属性|描述
--|--
align|设置单元格内容水平对齐方式:left、 center、 right、justify
valign|设置单元格内容垂直对齐方式:top、 middle、 bottom、 baseline
span|规定该列组应该横跨的列数，默认值是1
width|设定列组合的宽度
---
- 框架集的基本结构
   - 语法
   ```
   <frameset rows = "行高度所占窗口的像素或比例,.." cols = "列宽度所占窗口的像素或比例,..">
    <frame src = "..."/>
    ...
   </frameset>
   ```
- 一个\<frameset>框架集可以包含多个\<frame>框架窗口，具有rows和cols属性。
- rows属性用于设置框架中包含的行数以及各行高度占窗口的像素或比例；当参数个数是两个或两个以上时，参数之间需用逗号（，）隔开。
- cols属性用于设置框架中包含的列数以及各列宽度占窗口的像素或比例；当参数个数是两个或两个以上时，参数之间需用逗号（，）隔开
- rows与cols属性可以单独使用，也可以一起使用。

- \<frameset>标签的属性

---
描述|属性
--|--
rows|设置框架集中包含框架的行数，以及对应的高度
cols|设置框架集中包含框架的列数，以及对应的宽度
frameborder|设置框架集的边框是否显示，取值为1、0或ys、no，边框本身不能调整宽度
bordercolor|设置框架集的边框的颜色
framespacing|框架与框架间的空白距离
---
- 表单属性

```
<form action = "处理数据程序的URL地址" method = "get|post" name = "表单名称" ...>
</form>
```

- 属性action、 method和name是\<form>标签常用的三个属性；
- action属性用于指定服务器端用来处理表单的程序的URL地址；当提交表单时，使
用action属性指定的服务器端程序来处理数据，多用于动态交互性网站开发；
- method属性用于指定以何种方式向服务器端发送数据；
- name属性指明该表单的名称。
- action属性
  - action属性可以是Web服务器上数据处理程序的URL地址，或者是Email地址。
- method属性
  - get方式的请求数据可以被缓存
  - get方式：将数据作为URL的一部分发送给服务器。

```
https://www.itshixun.com/web/login.jsp?userName=guoqy&userPwd=123456
```

- post方式：将数据隐藏在HTTP的数据中进行传输
- id和name属性
  - name属性用来设置表单元素的名称，name现多用id属性替代
  