# fake-pi
这是一个假的圆周率  
是一个很烂的加/解密器  
只是我看到图片隐写的讲解，突发灵感随手敲的一段程序

## 使用
运行后根据需求敲指令（就两个指令，我在软件里注明了），后输入自己想要加/解密的内容即可

## 工作原理  
编码器：输出的前四百位（算上“3.”是402位）是真正的圆周率，后面每五位对应一个字的ansi编码  
解码器：读取402位之后，进行还原  
日后可能会加入更进一步的加密方式（比如将每一个字的五位分散近pi中，或者把ansi码转为9进制或7进制之类不常用的进制）


# bangumi格式统一器

## 使用
下载.exe文件即可，如有编译器可使用.cpp  
输入格式：使用空格与回车为分隔符，输入内容最后加入“done”作为识别  
例如：  
>rabbitohh eoeoeoeoe djdjdjjdj  
>papapapapa sjsjs  
>ddd 的 我の ♀  
>done    

得到的结果如下  
result1：
>rabbitohh,eoeoeoeoe,djdjdjjdj,papapapapa,sjsjs,ddd,的,我の,♀  

result2：  
>rabbitohh、eoeoeoeoe、djdjdjjdj、papapapapa、sjsjs、ddd、的、我の、♀  

运行后，输入要转换的内容，格式如上，输入完毕后敲回车，看到“写入完成啦A_A”的提示后即可关闭控制台窗口  
此时在运行目录下会生成两个命名分别为“result1”、“result2”的文本文档，打开即为转换结果  
