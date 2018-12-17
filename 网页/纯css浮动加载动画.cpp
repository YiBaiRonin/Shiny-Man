<!doctype html>
<html lang="en">
 <head>
  <!--网站编码格式，UTF-8 国际编码，GBK或 gb2312 中文编码-->
  <meta charset="UTF-8">
  <meta name="Keywords" content="关键词一，关键词二">
  <meta name="Description" content="网站描述内容">
  <title>Document</title>
  <style>
@-webkit-keyframes mainAnimation {
  0% {
    width: 50px;
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  20% {
    width: 50px;
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  40% {
    width: 150px;
    -webkit-transform: translateX(-50px) translateY(0px) rotate(0deg);
            transform: translateX(-50px) translateY(0px) rotate(0deg);
  }
  60% {
    width: 150px;
    -webkit-transform-origin: bottom right;
            transform-origin: bottom right;
    -webkit-transform: translateX(-150px) translateY(0px) rotate(90deg);
            transform: translateX(-150px) translateY(0px) rotate(90deg);
  }
  80% {
    width: 50px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(90deg);
            transform: translateX(-25px) translateY(0px) rotate(90deg);
  }
  100% {
    width: 50px;
    -webkit-transform: translateX(-50px) translateY(0px) rotate(90deg);
            transform: translateX(-50px) translateY(0px) rotate(90deg);
  }
}
@keyframes mainAnimation {
  0% {
    width: 50px;
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  20% {
    width: 50px;
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  40% {
    width: 150px;
    -webkit-transform: translateX(-50px) translateY(0px) rotate(0deg);
            transform: translateX(-50px) translateY(0px) rotate(0deg);
  }
  60% {
    width: 150px;
    -webkit-transform-origin: bottom right;
            transform-origin: bottom right;
    -webkit-transform: translateX(-150px) translateY(0px) rotate(90deg);
            transform: translateX(-150px) translateY(0px) rotate(90deg);
  }
  80% {
    width: 50px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(90deg);
            transform: translateX(-25px) translateY(0px) rotate(90deg);
  }
  100% {
    width: 50px;
    -webkit-transform: translateX(-50px) translateY(0px) rotate(90deg);
            transform: translateX(-50px) translateY(0px) rotate(90deg);
  }
}
@-webkit-keyframes secundaryAnimation {
  0% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  20% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(180deg);
            transform: translateX(0px) translateY(0px) rotate(180deg);
  }
  40% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(180deg);
            transform: translateX(0px) translateY(0px) rotate(180deg);
  }
  60% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  80% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  100% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(180deg);
            transform: translateX(0px) translateY(0px) rotate(180deg);
  }
}
@keyframes secundaryAnimation {
  0% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  20% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(180deg);
            transform: translateX(0px) translateY(0px) rotate(180deg);
  }
  40% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(180deg);
            transform: translateX(0px) translateY(0px) rotate(180deg);
  }
  60% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  80% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
            transform: translateX(0px) translateY(0px) rotate(0deg);
  }
  100% {
    -webkit-transform: translateX(0px) translateY(0px) rotate(180deg);
            transform: translateX(0px) translateY(0px) rotate(180deg);
  }
}
@-webkit-keyframes shadowAnimation {
  0% {
    width: 150px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(0deg);
            transform: translateX(-25px) translateY(0px) rotate(0deg);
  }
  20% {
    width: 75px;
    -webkit-transform: translateX(37.5px) translateY(0px) rotate(0deg);
            transform: translateX(37.5px) translateY(0px) rotate(0deg);
  }
  40% {
    width: 200px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(0deg);
            transform: translateX(-25px) translateY(0px) rotate(0deg);
  }
  60% {
    width: 75px;
    -webkit-transform: translateX(37.5px) translateY(0px) rotate(0deg);
            transform: translateX(37.5px) translateY(0px) rotate(0deg);
  }
  80% {
    width: 75px;
    -webkit-transform: translateX(37.5px) translateY(0px) rotate(0deg);
            transform: translateX(37.5px) translateY(0px) rotate(0deg);
  }
  100% {
    width: 150px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(0deg);
            transform: translateX(-25px) translateY(0px) rotate(0deg);
  }
}
@keyframes shadowAnimation {
  0% {
    width: 150px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(0deg);
            transform: translateX(-25px) translateY(0px) rotate(0deg);
  }
  20% {
    width: 75px;
    -webkit-transform: translateX(37.5px) translateY(0px) rotate(0deg);
            transform: translateX(37.5px) translateY(0px) rotate(0deg);
  }
  40% {
    width: 200px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(0deg);
            transform: translateX(-25px) translateY(0px) rotate(0deg);
  }
  60% {
    width: 75px;
    -webkit-transform: translateX(37.5px) translateY(0px) rotate(0deg);
            transform: translateX(37.5px) translateY(0px) rotate(0deg);
  }
  80% {
    width: 75px;
    -webkit-transform: translateX(37.5px) translateY(0px) rotate(0deg);
            transform: translateX(37.5px) translateY(0px) rotate(0deg);
  }
  100% {
    width: 150px;
    -webkit-transform: translateX(-25px) translateY(0px) rotate(0deg);
            transform: translateX(-25px) translateY(0px) rotate(0deg);
  }
}
@-webkit-keyframes float {
  0% {
    top: 50%;
  }
  50% {
    top: 51%;
  }
  100% {
    top: 50%;
  }
}
@keyframes float {
  0% {
    top: 50%;
  }
  50% {
    top: 51%;
  }
  100% {
    top: 50%;
  }
}
html, body {
  height: 100%;
}

body {
  position: relative;
  background: #99d2e4;
  background: linear-gradient(135deg, #99d2e4 0%, #ffd4da 100%);
}

.loader {
  position: absolute;
  width: 50px;
  height: 50px;
  top: 50%;
  left: 50%;
  margin-top: -25px;
  margin-left: -25px;
  background-color: #FFF5A5;
  -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
          transform: translateX(0px) translateY(0px) rotate(0deg);
  -webkit-animation: mainAnimation 2.6s ease 0s infinite forwards;
          animation: mainAnimation 2.6s ease 0s infinite forwards;
  z-index: 2;
}
.loader:after {
  content: '';
  display: inline-block;
  position: absolute;
  width: 50px;
  height: 50px;
  top: 0;
  left: -50px;
  background-color: #FFF5A5;
  -webkit-transform-origin: top right;
          transform-origin: top right;
  -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
          transform: translateX(0px) translateY(0px) rotate(0deg);
  -webkit-animation: secundaryAnimation 2.6s ease 0s infinite forwards;
          animation: secundaryAnimation 2.6s ease 0s infinite forwards;
}

.shadow {
  position: absolute;
  width: 100px;
  height: 10px;
  top: 50%;
  left: 50%;
  margin-top: 50px;
  margin-left: -75px;
  border-radius: 50%;
  background-color: #95a5a6;
  -webkit-transform: translateX(0px) translateY(0px) rotate(0deg);
          transform: translateX(0px) translateY(0px) rotate(0deg);
  -webkit-animation: shadowAnimation 2.6s ease 0s infinite forwards, float 5s ease-in-out 0s infinite forwards;
          animation: shadowAnimation 2.6s ease 0s infinite forwards, float 5s ease-in-out 0s infinite forwards;
  z-index: 1;
}

.logo {
  position: absolute;
  bottom: 20px;
  left: 50%;
  width: 42px;
  height: 42px;
  padding: 12px 5px;
  margin-left: -21px;
  -webkit-box-sizing: border-box;
          box-sizing: border-box;
  background-color: white;
  border-radius: 50%;
  -webkit-transition: -webkit-transform 500ms cubic-bezier(0.68, -0.55, 0.265, 1.55);
  transition: -webkit-transform 500ms cubic-bezier(0.68, -0.55, 0.265, 1.55);
  transition: transform 500ms cubic-bezier(0.68, -0.55, 0.265, 1.55);
  transition: transform 500ms cubic-bezier(0.68, -0.55, 0.265, 1.55), -webkit-transform 500ms cubic-bezier(0.68, -0.55, 0.265, 1.55);
}
.logo:hover {
  -webkit-transform: scale(1.4);
          transform: scale(1.4);
}
.logo img {
  width: 100%;
  height: auto;
  margin: 0 auto;
}

  </style>
 </head>
 <body>
<div class="loader"></div>
<div class="shadow"></div>
<style>

</style>
</div>
 </body>
</html>
