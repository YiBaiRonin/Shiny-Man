<!doctype html>
<html lang="en">
 <head>
  <meta charset="UTF-8">
  <meta name="Generator" content="EditPlus®">
  <meta name="Author" content="">
  <meta name="Keywords" content="">
  <meta name="Description" content="">
  <style type="text/css">
	//looks best full screen
//https://codepen.io/sdras/full/jwwpap/

body {
  background: url(https://s3-us-west-2.amazonaws.com/s.cdpn.io/28963/tron.gif) black;
  background-position: cover;
}

#app {
  width: 100vw;
  height: 100vh;
  display: flex;
  justify-content: center;
}

#contain {
  position: relative;
  height: 100vh;
  width: 60vw;
  margin: 30vh 50px 50px;
  padding: 10px;
  perspective: 200px;
}

.square {
  width: 100%;
  height: 100px;
  text-align: center;
  padding: 50px 0;
  font-size: 30px;
  position: absolute;
  svg {
    width: 500px;
    height: 350px;
  }
}

.square1 {
  transform: translateY(0px) rotateX(45deg);
}

.square2 {
  transform: translateY(50px) rotateX(45deg);
}

.square3 {
  transform: translateY(-50px) rotateX(45deg);
}
  </style>
  <title>Document</title>
 </head>
 <body>
<div id="app" @mousemove="coords">
  <div id="contain" :style="{ perspectiveOrigin: `${x}% ${y}%` }">
    <div class="square square2">
      <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 419.9 421.9" preserveAspectRatio="none">
  <title>
    circ3
  </title>
  <path d="M299.8,119.5a180.2,180.2,0,0,0-124.1,49.3l1.8,1.9a177.6,177.6,0,0,1,122.3-48.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M118.4,179l2.2,1.4A216.1,216.1,0,0,1,349.9,90.6l.6-2.5a218.7,218.7,0,0,0-232.1,91Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M299.8,370.5A70.2,70.2,0,0,0,369.3,310H349.4l16.9,2.8a67.6,67.6,0,0,1-132.9,0l16.9-2.8H230.4A70.2,70.2,0,0,0,299.8,370.5Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M240.8,318.6a61.8,61.8,0,0,0,118.1,0l-1.7-.3a60.1,60.1,0,0,1-114.8,0Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M230.4,290.9h19.9l-16.9-2.8a67.6,67.6,0,0,1,132.9,0l-16.9,2.8h19.9a70.1,70.1,0,0,0-138.9,0Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M358.9,282.3a61.8,61.8,0,0,0-118.1,0l1.7.3a60.1,60.1,0,0,1,114.8,0Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M516.2,344.7l-44.5-9.1c-.5,2.3-1,4.5-1.5,6.7l44.1,10.9Q515.3,349,516.2,344.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M504.5,340.8a211,211,0,0,0,3.9-40.3c0-2.1,0-4.1-.1-6.2l-20.8.6c.1,1.9.1,3.7.1,5.6a187.9,187.9,0,0,1-3.5,36.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M140.5,288l23.3,1.8c.1-.8.1-1.7.2-2.5l-23.3-2.3C140.7,286,140.6,287,140.5,288Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M142.7,271.4l23,4.2.5-2.4-22.9-4.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M141.1,282.4l23.2,2.6c.1-.8.2-1.6.3-2.5l-23.2-3.1C141.3,280.5,141.2,281.4,141.1,282.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M140.1,299.1l23.4.2c0-.8,0-1.7,0-2.5l-23.4-.6C140.1,297.2,140.1,298.1,140.1,299.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M140.2,307.3c0,1,.1,1.9.2,2.9l23.3-1.4c0-.8-.1-1.6-.1-2.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.7,250.4l.9,2.3,21.9-8.2-1-2.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M424.9,246l1,2.3,21.6-8.9-1.1-2.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M428.4,254.9l.8,2.4,22.2-7.4-1-2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M431.3,263.9l.6,2.4,22.6-5.8-.8-2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M429.9,259.4l.7,2.4,22.4-6.6-.8-2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M432.5,268.5l.6,2.4,22.8-5-.7-2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M418.5,233.2l1.2,2.2,20.5-11.1-1.4-2.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M420.8,237.4l1.1,2.2,20.9-10.4-1.3-2.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M400.4,392.5l-5,5.2,16.4,16.7q3-3,5.9-6.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M204.3,397.7l-1.8-1.8-16.7,16.4,2.1,2.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M395.4,203.2l1.8,1.8,16.7-16.4-2.1-2.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M433.5,273.2l.5,2.4,23-4.2-.6-2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M413.5,225.1l1.4,2.1,19.7-12.5-1.6-2.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M436,292.1c.1.8.1,1.7.1,2.5l23.3-1c0-1-.1-1.9-.2-2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M434.4,277.9l.4,2.5,23.1-3.4-.5-2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M435.1,282.6l.3,2.5,23.2-2.6-.3-2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M435.6,287.3l.2,2.5,23.3-1.8c-.1-1-.2-1.9-.3-2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M416.1,229.1l1.3,2.1,20.1-11.8-1.5-2.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M352,174.4l2.3,1,9.3-21.4-2.7-1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M347.6,172.6l2.3.9,8.6-21.7-2.7-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M410.8,221.2l1.4,2L431.5,210l-1.7-2.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M360.6,178.4q5.4,2.7,10.5,5.8l12.2-19.9q-6-3.7-12.3-6.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M356.3,176.3l2.3,1.1,10.1-21.1L366,155Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M301.2,140.7,301,164a136.1,136.1,0,0,1,30.8,3.8l5.5-22.7A159.7,159.7,0,0,0,301.2,140.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M373.1,185.4l2.1,1.4L388,167.3l-2.4-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M339.8,145.7l-5.8,22.6,2.4.7,6.3-22.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M338.5,169.6l2.4.7,7-22.3-2.8-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M343.1,171.1l2.4.8,7.8-22-2.8-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M401.9,210.1l1.6,1.9,17.8-15.2-1.9-2.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M405,213.7l1.6,1.9,18.3-14.5-1.8-2.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M398.7,206.5l1.7,1.8,17.2-15.8-2-2.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M408,217.4l1.5,2,18.8-13.9-1.8-2.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M380.9,190.8l2,1.5,14.2-18.5-2.3-1.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M377,188l2,1.4,13.6-19-2.4-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M391.9,199.9l1.8,1.7,16.1-16.9-2.1-2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M384.7,193.7l1.9,1.6,14.9-18-2.3-1.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M388.3,196.7l1.9,1.6,15.5-17.5-2.2-1.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M397.1,427.1l-14.2-18.5-2,1.5,13.9,18.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M392.6,430.4l-13.6-19-2,1.4,13.2,19.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M373.6,442.1l-10.8-20.7-2.2,1.1L371,443.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M380.8,438.1l2.5-1.5-12.2-19.9L369,418Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M378.5,439.4,367,419.1l-2.2,1.2L376,440.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M375.1,414.1l-2.1,1.4,12.5,19.7,2.4-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M409.8,416.2l-16.1-16.9-1.8,1.7,15.8,17.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M421.3,404.1l-17.8-15.2-1.6,1.9,17.5,15.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M405.7,420l-15.5-17.5-1.9,1.6,15.2,17.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M384.7,407.2l14.5,18.3,2.3-1.8-14.9-18Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M424.8,399.8l-18.3-14.5-1.6,1.9,18,14.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M368.6,444.6l-10.1-21.1-2.3,1.1,9.7,21.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M342.6,454.4l-6.3-22.5-2.4.7,5.8,22.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M331.7,457l-4.7-22.9-2.4.5,4.2,23Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M326.2,458l-3.9-23-2.5.4,3.4,23.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M337.2,455.8l-5.5-22.7-2.4.6,5.1,22.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M360.9,448.1l2.7-1.1-9.3-21.4-2.3,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M347.9,452.8l-7-22.3-2.4.7,6.6,22.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M349.9,427.3l-2.3.9,8.2,21.9,2.7-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M317.8,459.2l2.9-.3-3.1-23.2-2.5.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M353.2,451l-7.8-22-2.4.8,7.4,22.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M408,383.5l18.5,14.2,1.8-2.3-18.8-13.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M437.5,381.5l-20.1-11.8-1.3,2.1L436,384Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M434.6,386.2l-19.7-12.5-1.4,2.1L433,388.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M412.2,377.6l-1.4,2,19,13.6,1.7-2.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M303.4,436.8H301l.2,23.4h2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M182.3,369.6l-20.1,11.8,1.5,2.5,19.9-12.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M186.1,375.7l-1.4-2.1-19.7,12.5,1.6,2.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M178.9,363.4l-1.1-2.2-20.9,10.4,1.3,2.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M188.8,379.7l-1.4-2-19.3,13.2,1.7,2.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M176.7,359.2l-1.1-2.3-21.3,9.7,1.2,2.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M181.2,367.6l-1.2-2.2-20.5,11.1,1.4,2.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M207.8,401l-1.8-1.7-16.1,16.9,2.1,2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M201,394.3l-1.7-1.8L182,408.3l2,2.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M191.7,383.5l-1.5-2-18.8,13.9,1.8,2.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M193.1,385.3l-18.3,14.5,1.8,2.3,18-14.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M197.7,390.8l-1.6-1.9-17.8,15.2,1.9,2.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M166.2,327.7l-.5-2.4-23,4.2.5,2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M167.2,332.3l-.6-2.4-22.8,5,.7,2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M174.8,354.9l-1-2.3-21.6,8.9,1.1,2.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M164.6,318.3l-.3-2.5-23.2,2.6.3,2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171.3,346l-.8-2.3-22.2,7.4,1,2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.9,350.5l-.9-2.3-21.9,8.2,1,2.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M169.7,341.5l-.7-2.4-22.4,6.6.8,2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M223.6,440.8l11.1-20.5-2.2-1.2-11.5,20.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M263.3,431.9l-6.3,22.5,2.8.8,5.8-22.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M284.4,436l-2.5-.3-3.1,23.2,2.9.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M270.3,433.6l-2.4-.6-5.5,22.7,2.8.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M287.3,459.7l1.8-23.3-2.5-.2-2.3,23.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M270.8,457.5l4.2-23-2.4-.5L267.9,457Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M276.3,458.5l3.4-23.1-2.5-.4-3.9,23Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M292.9,460l1-23.3h-2.5L290,459.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M306.7,460.1l2.9-.2-1.4-23.3h-2.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M298.7,436.8h-2.5l-.6,23.4h2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M256.6,429.8l-2.3-.8-7.8,22,2.8,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M218.8,438.1,230.7,418l-2.1-1.3-12.2,19.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M312.3,459.7l2.9-.3-2.2-23.3-2.5.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M214.1,435.2l12.5-19.7-2.1-1.4-12.9,19.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M228.6,443.4,239,422.5l-2.2-1.1L226,442.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M238.7,448.1l8.9-21.6-2.3-1-9.3,21.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M252.1,428.2l-2.3-.9-8.6,21.7,2.7,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M194,420a161.7,161.7,0,0,0,15.4,12.1l13.2-19.3a137.9,137.9,0,0,1-13.2-10.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M254.5,453.6l6.6-22.4-2.4-.7-7,22.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M233.6,445.8l9.7-21.3-2.3-1.1L231,444.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M235.8,188.5l.9,1.5.8-.4-.8-1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M235.5,190.6l-.9-1.5-.8.5.9,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M231.7,193l-.9-1.5-.7.5.9,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M239.4,188.4l-.8-1.5-.8.4.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M232.9,192.2l.7-.5-.9-1.5-.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M229.2,194.6l.7-.5-1-1.4-.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M244.6,185.8l.8-.4-.7-1.6-.8.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M209.3,211.1l-1.2-1.2-.6.6,1.2,1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M246.6,184.9l.8-.4-.7-1.6-.8.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M243.4,186.4l-.8-1.6-.8.4.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M228,195.4l-1-1.4-.7.5,1,1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M214.1,206.4l-1.2-1.3-.7.6,1.2,1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M215.8,205l-1.1-1.3-.7.6,1.2,1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M248.6,183.9l.8-.3-.7-1.6-.8.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M212.5,208l-1.2-1.3-.6.6,1.2,1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M210.9,209.5l-1.2-1.2-.6.6,1.2,1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M217.5,203.5l-1.1-1.3-.7.6,1.1,1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M219.2,202.1l-1.1-1.3-.7.6,1.1,1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M225.5,197.2l.7-.5-1-1.4-.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M223.7,198.5l.7-.5-1-1.4-.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M222.6,199.3l-1-1.4-.7.5,1.1,1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M220.9,200.7l-1.1-1.4-.7.6,1.1,1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M239.8,186.3l.8,1.5.8-.4-.8-1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M280.6,174.6h.9l-.2-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M274,175.8l.9-.2-.3-1.7-.9.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M276.2,175.4l.9-.2-.3-1.7-.9.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M278.4,175h.9l-.3-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M285,174h.9l-.2-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M282.8,174.3h.9l-.2-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M294.7,173.3v-1.7h-.9v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M291.6,173.4h.9v-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M287.2,173.8h.9l-.2-1.7H287Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M254.8,181.4l.8-.3-.6-1.6-.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M257.7,180.3l-.6-1.6-.8.3.6,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M271.4,174.6l.4,1.7.8-.2-.4-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M253.5,181.9l-.6-1.6-.8.3.6,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M250.7,183.1l.8-.3-.7-1.6-.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M261.9,178.9l-.5-1.7-.8.3.5,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M259,179.9l.8-.3-.5-1.6-.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M270.5,176.6l-.4-1.7-.9.2.4,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M267,175.7l.4,1.7.8-.2-.4-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M263.2,178.5l.8-.3-.5-1.7-.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M266.2,177.7l-.5-1.7-.9.2.5,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M197.7,224.5l-1.4-1-.5.7,1.4,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M176.7,268.3l-1.7-.4-.2.9,1.7.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M176.1,270.4l-1.7-.4-.2.9,1.7.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M177.3,266.1l-1.7-.5-.2.9,1.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M175.2,274.7l-1.7-.3-.2.9,1.7.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M175.6,272.6l-1.7-.4-.2.9,1.7.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M180,257.7l-1.6-.6-.3.8,1.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.9,277.5l1.7.3.2-.9-1.7-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M180.7,255.6l-1.6-.6-.3.8,1.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M178.5,261.9l-1.6-.5-.3.8,1.6.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M181.5,253.5l-1.6-.6-.3.8,1.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M179.2,259.8l-1.6-.6-.3.8,1.6.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M177.9,264l-1.7-.5-.3.8,1.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171,293.1h1.7v-.9h-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M170.9,295.3h1.7v-.9H171Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M170.9,297.6h1.7c0-.3,0-.6,0-.9h-1.7C170.9,297,170.9,297.3,170.9,297.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171.2,290.9h1.7v-.9h-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M207.8,212.6l-1.3-1.2-.6.6,1.3,1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171.9,284.1l1.7.2v-.9l-1.7-.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.5,279.7l1.7.3v-.9l-1.7-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.2,281.9l1.7.2v-.9l-1.7-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171.4,288.6l1.7.2v-.9l-1.7-.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171.6,286.4l1.7.2v-.9l-1.7-.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M170.8,299.8h1.7c0-.3,0-.6,0-.9h-1.7C170.8,299.3,170.8,299.5,170.8,299.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M193.9,230l-1.4-1-.5.7,1.4.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M296.1,173.2h.9v-1.7H296Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M196.4,226.3l-1.4-1-.5.7,1.4,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M195.2,228.1l-1.4-1-.5.7,1.4,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M200.5,221l-1.3-1.1-.6.7,1.4,1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M199.1,222.8l-1.4-1.1-.5.7,1.4,1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M201.9,219.3l-1.3-1.1-.6.7,1.3,1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M204.8,215.9l-1.3-1.2-.6.7,1.3,1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M170.8,301.2c0,.3,0,.6,0,.9h1.7v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M203.3,217.6l-1.3-1.1-.6.7,1.3,1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M188.1,239.5l-1.5-.8-.4.8,1.5.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M186.1,243.4l-1.5-.8-.4.8,1.6.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M185.1,245.4l-1.6-.7-.4.8,1.6.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M183.3,249.4l-1.6-.7-.4.8,1.6.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M184.2,247.4l-1.6-.7-.4.8,1.6.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M187.1,241.4l-1.5-.8-.4.8,1.5.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M192.7,231.8l-1.5-.9-.5.7,1.5.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M182.4,251.5l-1.6-.7-.3.8,1.6.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M191.5,233.7l-1.5-.9-.5.8,1.5.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M190.4,235.6l-1.5-.9-.5.8,1.5.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M189.2,237.5l-1.5-.9-.4.8,1.5.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M206.3,214.3l-1.3-1.2-.6.6,1.3,1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M410.2,233.8l-.5-.8-1.5.9.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M411.4,235.7l-.4-.8-1.5.9.4.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M407.8,230l-.5-.7-1.4,1,.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M412.5,237.7l-.4-.8-1.5.9.4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M409.1,231.9l-.5-.7-1.5.9.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M418.5,249.8l-.4-.8-1.6.7.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M417.6,247.8l-.4-.8-1.6.7.4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M416.6,245.7l-.4-.8-1.6.8.4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M413.6,239.7l-.4-.8-1.5.8.4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M415.6,243.7l-.4-.8-1.5.8.4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M406.6,228.1l-.5-.7-1.4,1,.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M414.6,241.7l-.4-.8-1.5.8.4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M405.3,226.3l-.5-.7-1.4,1,.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M397,215.6l-.6-.7-1.3,1.2.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M398.4,217.4l-.6-.7-1.3,1.1.6.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M393.9,212.3l-.6-.6-1.3,1.2.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M392.4,210.7l-.6-.6-1.2,1.2.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M395.5,214l-.6-.7-1.3,1.2.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M404,224.4l-.5-.7-1.4,1,.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M399.9,219.1l-.6-.7-1.3,1.1.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M402.6,222.6l-.5-.7-1.4,1.1.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M401.3,220.8l-.6-.7-1.3,1.1.5.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M420.2,254l-.3-.8-1.6.6.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M425.7,281.7v.9l1.7-.2v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426,283.9v.9l1.7-.2v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M425,277.3l.2.8,1.7-.3-.2-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.3,286.1v.9l1.7-.2v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M425.4,279.5v.9l1.7-.3v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M427,294.9v.9h1.7v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.5,288.3v.9l1.7-.2v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.4,275.6l-.2-.9-1.7.4.2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M427,297.1c0,.3,0,.6,0,.9h1.7c0-.3,0-.6,0-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.7,290.5v.9h1.7v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.9,292.7v.9h1.7v-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426,273.4l-.2-.9-1.7.4.2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M421.7,258.2l-.3-.8-1.6.6.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M422.4,260.4l-.3-.8-1.6.6.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M423.1,262.5l-.3-.8-1.6.5.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M421,256.1l-.3-.8-1.6.6.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M390.8,209.1l-.6-.6-1.2,1.2.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M419.3,251.9l-.3-.8-1.6.7.3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M424.9,269l-.2-.9-1.7.4.2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M425.5,271.2l-.2-.9-1.7.4.2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M424.4,266.8l-.2-.9-1.7.5.2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M423.8,264.7l-.3-.8-1.7.5.2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M300.5,173.2h.9v-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M330.2,176.8l.4-1.7-.9-.2-.4,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M323.7,175.4l.3-1.7-.9-.2-.3,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M328,176.3l.4-1.7-.9-.2-.4,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M334.5,178l.5-1.7-.8-.2-.5,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M325.9,175.9l.3-1.7-.9-.2-.3,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M332.4,177.4l.4-1.7-.8-.2-.4,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M344.3,181.2l.8.3.6-1.6-.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M342.2,180.4l.8.3.6-1.6-.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M335.8,178.4l.8.2.5-1.7-.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M339.3,177.6l-.8-.3L338,179l.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M340.1,179.7l.8.3.6-1.6-.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M319.3,174.7l.3-1.7h-.9l-.2,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M310.3,173.6v-1.7h-.9v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M308,173.4v-1.7h-.9v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M321.5,175l.3-1.7h-.9l-.3,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M299.1,173.2v-1.7h-.9v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M303.6,173.2v-1.7h-.9v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M389.2,207.5l-.6-.6-1.2,1.3.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M346.3,182l.8.3.6-1.6-.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M317.1,174.3l.2-1.7h-.9l-.2,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M314.9,174.1l.2-1.7H314l-.2,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M312.5,173.8l.2-1.7h-.9l-.2,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M305.8,173.3v-1.7H305v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M370,194.3l.7.5,1-1.4-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M377.9,200l1.1-1.4-.7-.5-1,1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M375.4,198.1l.7.5,1-1.4-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M371.8,195.5l.7.5,1-1.4-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M373.6,196.8l.7.5,1-1.4-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M379,200.8l.7.5,1.1-1.3-.7-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M387.5,205.9l-.6-.6-1.2,1.3.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M385.9,204.4l-.7-.6-1.1,1.3.6.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M384.2,202.9l-.7-.6-1.1,1.3.7.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M382.5,201.5l-.7-.6-1.1,1.3.7.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M351.2,184l.7-1.6-.8-.4-.7,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M357.3,186.9l.8-1.5-.8-.4-.8,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M355.3,185.9l.8-1.6-.8-.4-.7,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M349.2,183.1l.7-1.6-.8-.3-.7,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M359.2,187.9l.8-1.5-.8-.4-.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M353.3,185l.7-1.6-.8-.4-.7,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M365.1,191.2l.9-1.5-.8-.4-.9,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M367,192.4l.9-1.5-.7-.5-.9,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M361.2,189l.8-1.5-.8-.4-.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M368.8,193.6l.9-1.5-.7-.5-.9,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M363.1,190.1l.9-1.5-.8-.4-.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M180.5,349.5l.3.8,1.6-.7-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M367.6,408.1l.9,1.5.7-.5-.9-1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M366.4,408.8l-.7.5.9,1.5.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M372,405.2l-.7.5,1,1.4.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M373.8,403.9l-.7.5,1,1.4.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M370.2,406.4l-.7.5,1,1.4.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M364.5,410l-.7.4.9,1.5.8-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M355.5,416.8l-.8-1.6-.8.4.7,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M357.5,415.8l-.8-1.5-.8.4.8,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M361.5,413.7l-.8-1.5-.8.4.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M362.6,411.1l-.8.4.8,1.5.8-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M359.5,414.7l-.8-1.5-.8.4.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M385.2,394.7l1.2,1.3.6-.6-1.2-1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M386.8,393.2l1.2,1.3.6-.6-1.2-1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M383.5,396.2l1.1,1.3.7-.6-1.2-1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M352.8,416.2l-.8.4.7,1.6.8-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M388.4,391.7l1.2,1.2.6-.6-1.2-1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M390,390.1l1.2,1.2.6-.6-1.2-1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M378.4,402.6l-1.1-1.4-.7.5,1,1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M378.4,400.5l1.1,1.4.7-.6-1.1-1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M376.6,404l-1-1.4-.7.5,1,1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M305.7,429.3v-1.7h-.9v1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M381.9,397.6,383,399l.7-.6-1.1-1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M342.5,420.3l-.8.3.6,1.6.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M318.9,426.3H318l.2,1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M321,425.9h-.9l.3,1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M316.7,426.6h-.9l.2,1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M325.8,426.8l-.3-1.7-.8.2.3,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M328,426.3l-.4-1.7-.8.2.4,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M323.6,427.2l-.3-1.7-.9.2.3,1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M314.5,426.9h-.9l.2,1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M307.8,427.4H307v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M310.1,427.3h-.9v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M312.3,427.1h-.9l.2,1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M344.6,419.6l-.8.3.6,1.6.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M340.4,421.1l-.8.3.5,1.6.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M391.6,388.6l1.3,1.2.6-.6-1.3-1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M350.6,419l.8-.4-.7-1.6-.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M348.6,419.9l.8-.3-.7-1.6-.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M329.8,424.1l-.9.2.4,1.7.9-.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M345.9,419.1l.6,1.6.8-.3-.6-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M337.5,422l.5,1.7.8-.3-.5-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M331.9,423.6l-.8.2.4,1.7.9-.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M334.1,423l-.8.2.5,1.7.8-.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M335.8,424.3l.8-.3-.5-1.7-.8.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M380.2,399.1l1.1,1.3.7-.6-1.1-1.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M423.9,328.8l1.7.4.2-.9-1.7-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M423.4,331l1.7.4.2-.9-1.7-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.5,324.8l.2-.9-1.7-.3-.2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M422.8,333.1l1.7.4.2-.9-1.7-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M425.2,322.3l1.7.3v-.9l-1.7-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M424.4,326.7l1.7.4.2-.9-1.7-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M419.5,343.7l1.6.6.3-.8-1.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M422.2,335.3l1.7.5.2-.8-1.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M420.2,341.6l1.6.6.3-.8-1.6-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M421.6,337.4l1.7.5.3-.8-1.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M420.9,339.5l1.6.5.3-.8-1.6-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.9,306.9h1.7v-.9H427C426.9,306.3,426.9,306.6,426.9,306.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M427,304.7h1.7v-.9H427Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M418.7,345.8l1.6.6.3-.8L419,345Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M427.1,299.4c0,.3,0,.6,0,.9h1.7c0-.3,0-.6,0-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M393.1,387l1.3,1.2.6-.6-1.3-1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M428.8,301.6h-1.7c0,.3,0,.6,0,.9h1.7C428.8,302.2,428.8,301.9,428.8,301.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M428,315.1l-1.7-.2v.9l1.7.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M428.4,310.6h-1.7v.9h1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M427.7,317.3l-1.7-.2v.9l1.7.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M427.4,319.5l-1.7-.2v.9l1.7.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M428.2,312.8l-1.7-.2v.9l1.7.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M426.8,309.1h1.7v-.9h-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M401.6,376.8l1.4,1,.5-.7-1.4-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M406.7,369.5l1.5.9.5-.7-1.5-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M400.3,378.5l1.4,1.1.5-.7-1.4-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M405.5,371.3l1.4,1,.5-.7-1.4-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M404.2,373.2l1.4,1,.5-.7-1.4-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M402.9,375l1.4,1,.5-.7-1.4-1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M417.9,347.9l1.6.6.3-.8-1.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M394.6,385.3l1.3,1.2.6-.7-1.3-1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M396,383.7l1.3,1.1.6-.7-1.3-1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M397.5,382l1.3,1.1.6-.7-1.3-1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M398.9,380.3l1.3,1.1.6-.7-1.4-1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M414.3,356l1.6.8.4-.8-1.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M407.9,367.6l1.5.9.5-.8-1.5-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M417.1,349.9l1.6.7.3-.8-1.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M413.3,358l1.5.8.4-.8-1.6-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M416.2,352l1.6.7.4-.8-1.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M415.3,354l1.6.7.4-.8-1.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M410.2,363.8l1.5.9.4-.8-1.5-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M412.3,359.9l1.5.8.4-.8-1.5-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M409,365.7l1.5.9.4-.8-1.5-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M411.2,361.9l1.5.8.4-.8-1.5-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M193.4,373.2l.5.7,1.4-1-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M190.9,369.5l.5.7,1.5-.9-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M189.7,367.6l.5.7,1.5-.9-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M188.6,365.6l.5.8,1.5-.9-.4-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.6,304.3c0-.3,0-.6,0-.9h-1.7v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M192.1,371.4l.5.7,1.4-1-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M185.3,359.7l.4.8,1.5-.8-.4-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M183.3,355.7l.4.8,1.6-.8-.4-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M184.3,357.7l.4.8,1.5-.8-.4-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M187.4,363.7l.4.8,1.5-.9-.4-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M186.3,361.7l.4.8,1.5-.8-.4-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M194.7,375.1l.5.7,1.4-1-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M198.7,380.5l.6.7,1.3-1.1-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M206.1,388.9l.6.6,1.2-1.2-.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M204.5,387.3l.6.6,1.3-1.2-.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M209.2,392.1l.6.6,1.2-1.2-.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M203,385.6l.6.7,1.3-1.1-.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M207.6,390.6l.6.6,1.2-1.2-.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M197.3,378.7l.5.7,1.4-1.1-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M196,376.9l.5.7,1.4-1-.5-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M182.3,353.7l.4.8,1.6-.7-.4-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M210.8,393.7l.6.6,1.2-1.3-.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M201.6,383.9l.6.7,1.3-1.1-.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M200.1,382.2l.6.7,1.3-1.1-.6-.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M174,319.8V319l-1.7.2v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M173.4,315.4v-.9l-1.7.2v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M173.7,317.6v-.9l-1.7.2v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.9,323.7l.2.9,1.7-.3-.2-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M303.4,427.6h-.9v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M173.4,325.9l.2.9,1.7-.3-.2-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M173.2,313.2v-.9l-1.7.2v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.7,306.5v-.9h-1.7v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M172.8,308.7v-.9h-1.7v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M173,311v-1h-1.7v1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M178.1,343.2l.3.8,1.6-.6-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M181.4,351.6l.4.8,1.6-.7-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M177.4,341.1l.3.8,1.6-.6-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M176.7,339l.3.8,1.6-.5-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M179.7,347.4l.3.8,1.6-.6-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M178.9,345.3l.3.8,1.6-.6-.3-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M174.3,330.3l.2.9,1.7-.4-.2-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M174.9,332.5l.2.9,1.7-.4-.2-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M176.1,336.8l.3.8,1.7-.5-.2-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M173.8,328.1l.2.9,1.7-.4-.2-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M175.4,334.6l.2.9,1.7-.5-.2-.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M174.4,322v-.9l-1.7.3v.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M269.7,424.1l-.4,1.7.9.2.4-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M268.3,423.8l-.8-.2-.4,1.7.9.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M271.8,424.6l-.4,1.7.9.2.4-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M274,425.1l-.4,1.7.9.2.3-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M276.2,425.5l-.3,1.7.9.2.3-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M264.1,422.6l-.8-.3-.5,1.7.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M266.2,423.2l-.8-.2-.5,1.7.9.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M259.8,421.3l-.8-.3-.6,1.6.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M256.3,421.9l.8.3.6-1.6-.8-.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M261.9,421.9l-.8-.3-.5,1.6.8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M278.3,425.9l-.3,1.7h.9l.3-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M294.6,427.6h-.9v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M296.8,427.7H296v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M212.5,395.3l.7.6,1.2-1.3-.6-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M292.4,427.5h-.9v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M301.2,427.7h-.8v1.7h.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M299,427.7h-.9v1.7h.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M254.8,419.5l-.6,1.6.8.3.6-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M284.9,426.8l-.2,1.7h.9l.2-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M282.7,426.5l-.2,1.7h.9l.2-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M289.2,429h.9v-1.7h-.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M287.1,427.1l-.2,1.7h.9l.2-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M280.5,426.2l-.3,1.7h.9l.3-1.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M225.6,403.8l-1,1.4.7.5,1-1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M223.9,402.5l-1,1.4.7.5,1-1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M226.5,406.5l.7.5,1-1.4-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M230,406.8l-.7-.5-1,1.4.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M222.1,401.1l-1.1,1.4.7.5,1-1.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M217.5,399.7l.7.6,1.1-1.3-.7-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M219.3,401.1l.7.6,1.1-1.4-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M214.1,396.8l.7.6,1.1-1.3-.7-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M215.8,398.2l.7.6,1.1-1.3-.7-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M230.2,409l.8.5.9-1.5-.7-.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M240.7,413.1l-.8,1.5.8.4.8-1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M246.7,416.1l-.7,1.6.8.4.7-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M244.7,415.1l-.8,1.6.8.4.7-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M242.7,414.1l-.8,1.5.8.4.8-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M248.7,417l-.7,1.6.8.4.7-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M250.7,417.8l-.7,1.6.8.3.6-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M234,411.3l.8.5.9-1.5-.7-.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M252.8,418.7l-.6,1.6.8.3.6-1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M236.8,411l-.9,1.5.8.4.8-1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M233.8,409.2l-.7-.5-.9,1.5.7.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M238.8,412.1l-.8,1.5.8.4.8-1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M198.6,134.3a192,192,0,0,1,55.5-23l-1.4-5.7a199.3,199.3,0,0,0-57.1,23.7Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M346.3,97a211.2,211.2,0,0,0-95.6.6l1.1,4.6a206.4,206.4,0,0,1,93.4-.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M153.8,176.2l3.1,2.6a189.4,189.4,0,0,1,45.3-38.7l-2.1-3.5A193.5,193.5,0,0,0,153.8,176.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M450.9,139.5l-31.1,33.1A176.9,176.9,0,0,1,438.4,193l35.9-27.9a225.1,225.1,0,0,0-18.3-20.8Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".6"/>
  <path d="M390.6,150.4A176,176,0,0,1,413,166.5l29.3-34.7a221.4,221.4,0,0,0-28.1-20.3Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".8"/>
  <path d="M345,130.9a174.3,174.3,0,0,1,37.7,15l21.5-40.1A218.3,218.3,0,0,0,356.6,87Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M109.6,343l-.8-3.8-8.5,1.7.8,4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M113,356.1l-1.1-3.7-8.4,2.3,1.1,3.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M111.2,349.6l-.9-3.8-8.5,2,1,3.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M108.2,336.3l-.7-3.8L99,333.9l.7,4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M115.1,362.6l-1.2-3.7-8.3,2.6,1.2,3.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M106.2,322.8c-.1-1.3-.3-2.6-.4-3.9l-8.6.8c.1,1.3.3,2.7.4,4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M132.1,399.6l-1.9-3.4-7.7,4.3,2,3.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M117.4,369l-1.3-3.6-8.3,2.9,1.4,3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M135.7,405.4l-2.1-3.3-7.5,4.6,2.1,3.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M119.9,375.3l-1.5-3.6-8.1,3.2,1.5,3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M122.6,381.6,121,378l-8,3.5,1.7,3.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M125.6,387.7l-1.7-3.5-7.9,3.8,1.8,3.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M326.3,502.3l4-.6-1.3-8.6-3.8.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M139.4,411.1l-2.2-3.2-7.3,4.8,2.3,3.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M344.3,499.2l-1.9-8.4-3.8.8,1.7,8.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M105.5,316.1c-.1-1.3-.2-2.6-.3-3.9l-8.6.5c.1,1.3.2,2.7.3,4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M309.1,503.8l-.4-8.6h-3.9l.2,8.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M377,488.9l-3.3-8-2.5,1,3.2,8.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M371.5,491l-3-8.1-3.6,1.3,2.9,8.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M347.2,498.5l3.9-1-2.2-8.4-3.8.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M105.1,309.3c-.1-1.3-.1-2.6-.1-3.9l-8.6.2c0,1.4.1,2.7.1,4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M96.2,300.4c0,.7,0,1.4,0,2.1h8.7c0-.7,0-1.4,0-2.1s0-1.2,0-1.8H96.3C96.2,299.2,96.2,299.8,96.2,300.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M364.8,493.4l-2.8-8.2-3.7,1.2,2.6,8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M358,495.6l-2.5-8.3-3.7,1.1,2.3,8.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M198.3,466.8l-3.3-2.1-4.7,7.4,3.4,2.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M268,492.8l-3.8-.7-1.6,8.5,4,.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M248.1,488.4l-3.7-1.1-2.5,8.4,3.9,1.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M261.3,491.5l-3.8-.8-1.9,8.5,4,.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M241.5,486.5l-3.7-1.2-2.8,8.3,3.9,1.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M228.7,481.9l-3.6-1.5-3.4,8.1,3.8,1.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M302,504v-8.6H298V504H302Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M105,295l-8.7-.2v.7l8.7.2C105,295.4,105,295.2,105,295Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M222.4,479.3l-3.5-1.6-3.6,8,3.7,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M143.4,416.6l-2.3-3.1-7.1,5.1,2.4,3.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M288.3,495l-3.9-.3-.7,8.6,4,.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M156.4,432.3l-2.6-2.9-6.6,5.8,2.7,3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M161.1,437.2l-2.7-2.8-6.3,6,2.8,2.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M216.2,476.5l-3.5-1.7-3.9,7.9,3.6,1.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M147.6,422l-2.4-3.1-7,5.3,2.5,3.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M171,446.6l-2.9-2.6-5.9,6.4,3,2.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M166,442l-2.8-2.7-6.1,6.2,2.9,2.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M204.2,470.2l-3.4-1.9-4.5,7.6,3.5,2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M192.6,463.1l-3.2-2.2-5,7.2,3.4,2.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M181.5,455.2l-3.1-2.4-5.5,6.9,3.2,2.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M137.5,378.2q2.2,4.6,4.7,9.2l.8-.4q-2.5-4.5-4.7-9.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M164.4,417.6q-3.4-3.9-6.5-7.9l-.7.5q3.1,4.1,6.5,8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M191.7,443.2q-4.1-3.1-8-6.4l-.6.7q3.9,3.3,8,6.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M214.1,458.7q4.5,2.5,9.2,4.6l.4-.8q-4.6-2.2-9.1-4.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M206.7,454.5l.4-.7c-2.9-1.8-5.8-3.6-8.6-5.6l-.5.7Q202.3,451.8,206.7,454.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M176.8,431.7l.6-.6c-2.5-2.3-4.9-4.7-7.3-7.2l-.6.6Q173,428.2,176.8,431.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M231.1,466.8q4.7,2,9.6,3.7l.3-.8q-4.8-1.7-9.6-3.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M431,423.6l-.6-.6q-3.5,3.7-7.2,7.3l.6.6Q427.5,427.4,431,423.6Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M472.8,347.3l-1.1,4,.8.2,1.1-4Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M120.5,315.7h.9c-.3-3.4-.5-6.8-.6-10.2h-.9C120,308.9,120.2,312.3,120.5,315.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M134.8,370q-2-4.7-3.7-9.6l-.8.3c1.2,3.2,2.4,6.5,3.7,9.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M128.4,352.4q-1.5-4.9-2.7-9.9l-.8.2q1.2,5,2.7,9.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M123.9,334.2q-1-5-1.6-10.1h-.9q.7,5.1,1.7,10.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M369.3,465.5q-4.7,2-9.6,3.7l.3.8q4.9-1.7,9.6-3.7Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M443.2,409.3l-.7-.5q-3.1,4.1-6.4,8l.7.6Q440.1,413.4,443.2,409.3Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M259,474.9q-5-1.2-9.9-2.6l-.2.8q4.9,1.5,10,2.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M402.6,448.2l-.5-.7q-4.2,2.9-8.6,5.6l.5.7Q398.3,451.1,402.6,448.2Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M453.8,393.7l-.7-.4q-2.7,4.4-5.6,8.6l.7.5Q451.1,398.1,453.8,393.7Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M119.8,296.9h.9c0-.7,0-1.4,0-2h-.9C119.9,295.5,119.9,296.2,119.8,296.9Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M469,359.4q-1.7,4.9-3.6,9.6l.8.3q2-4.7,3.7-9.6Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M462.7,377.1l-.8-.4q-2.2,4.7-4.6,9.2l.8.4Q460.5,381.8,462.7,377.1Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M417.4,436.7l-.6-.7q-3.9,3.3-8,6.5l.5.7Q413.5,440,417.4,436.7Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M386.6,458.1l-.4-.8q-4.5,2.5-9.1,4.7l.4.8Q382,460.6,386.6,458.1Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M277.5,478.2q-5.1-.6-10.1-1.6l-.2.8q5,.9,10.2,1.6Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M296.2,479.5l-10.2-.5v.9c3.4.3,6.8.4,10.3.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M351.7,471.9l-9.9,2.7.2.8q5-1.2,9.9-2.7Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M225.2,345.7a86,86,0,0,1-5.3-10.1l-3.2,1.4a90.5,90.5,0,0,0,5.5,10.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M230.4,353.3q-1.9-2.5-3.6-5l-2.9,1.9q1.8,2.7,3.7,5.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M215.8,324.2q-.8-2.9-1.5-5.9l-3.4.7q.7,3.1,1.5,6.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M236.3,360.2q-2.1-2.3-4.1-4.7l-2.7,2.2q2,2.5,4.2,4.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M228.5,244.4l2.7,2.1a88.3,88.3,0,0,1,10.4-11.1l-2.3-2.6A91.8,91.8,0,0,0,228.5,244.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M209.1,300.4q0,3,.2,6l3.5-.2c-.1-1.9-.2-3.9-.2-5.8,0-.1,0-.2,0-.3h-3.5C209.1,300.2,209.1,300.3,209.1,300.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M224.4,256.5l-3-1.7a90.3,90.3,0,0,0-6.8,14.3l3.2,1.2A87.4,87.4,0,0,1,224.4,256.5Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M214.5,282l-3.4-.7q-.7,3.1-1.1,6.2l3.4.5Q213.8,285,214.5,282Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M273.7,387.4l1-3.3-5.9-2-1.2,3.2Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M249.3,225.1l1.9,2.9a86.7,86.7,0,0,1,13.3-7.4l-1.4-3.2A91.2,91.2,0,0,0,249.3,225.1Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M257.9,377l-5.3-3.2-1.8,2.9,5.5,3.3Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M250.1,372.2l-5-3.7-2.1,2.7,5.1,3.8Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M242.9,366.6q-2.3-2-4.5-4.2l-2.4,2.5q2.3,2.3,4.7,4.4Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M266.1,381l-5.6-2.6-1.5,3.1,5.8,2.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M228.5,263l5.4,2.8a74.7,74.7,0,0,1,6-9.5l-4.9-3.6A81.2,81.2,0,0,0,228.5,263Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M220.1,288.7a79.8,79.8,0,0,0-.8,9.3l6.1.2a74.9,74.9,0,0,1,.7-8.6Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".8"/>
  <path d="M248.4,354.2l-2.4-2.4-4.4,4.2,2.6,2.6Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".3"/>
  <path d="M226.6,313.8a74.1,74.1,0,0,1-1-8.6l-6.1.4a81,81,0,0,0,1.1,9.3Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".7"/>
  <path d="M221.6,281.4l5.9,1.4a73.7,73.7,0,0,1,3.5-10.7l-5.6-2.3A80.1,80.1,0,0,0,221.6,281.4Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".9"/>
  <path d="M378.5,317.7l-5.9-1.3a73.8,73.8,0,0,1-3.3,11l5.7,2.2A79.4,79.4,0,0,0,378.5,317.7Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M259.9,363.3l-3.3,5.1.8.5,3.2-5.2Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".1"/>
  <path d="M348,365l-3.6-4.9a74.3,74.3,0,0,1-77.6,7l-2.7,5.4A80.4,80.4,0,0,0,348,365Z" transform="translate(-96.2 -82.1)" fill="#14becd"/>
  <path d="M241.4,346.5l-2.1-2.8-4.9,3.5,2.2,3Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".4"/>
  <path d="M235.5,338c-1-1.7-2-3.5-2.9-5.3l-5.5,2.6q1.4,3,3.1,5.8Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".5"/>
  <path d="M254.3,359.3l-.7-.5-3.8,4.8.7.6Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".2"/>
  <path d="M230,326.3c-.7-1.9-1.3-3.8-1.9-5.8l-5.9,1.6q.9,3.2,2,6.2Z" transform="translate(-96.2 -82.1)" fill="#f39124" opacity=".6"/>
  <path d="M299.8,396.1a95.7,95.7,0,1,1,23.4-188.4l.2-.8a96.5,96.5,0,1,0,66.7,127.7l-.8-.3A95.8,95.8,0,0,1,299.8,396.1Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M327.3,266.6a43.5,43.5,0,0,0-55,0h55Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M327.8,332.7h1.3a43.5,43.5,0,0,0,0-64.5h-1.3a42.6,42.6,0,0,1,0,64.5Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M325.9,334.2H272.3a43.5,43.5,0,0,0,55,0h-1.4Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
  <path d="M270.5,332.7h1.3a42.7,42.7,0,0,1,0-64.5h-1.3a43.5,43.5,0,0,0,0,64.5Z" transform="translate(-96.2 -82.1)" fill="#f39124"/>
</svg>
    </div>
    <div class="square square1">
      <svg data-name="Layer 1" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 440.9 395.4" preserveAspectRatio="none">
    <title>
      circ2
    </title>
      <path d="M79.4,287.7l45.3,2.6a174.3,174.3,0,0,1,26-82.2l-38.7-23.9A218.8,218.8,0,0,0,79.4,287.7Zm54-74.4a186.3,186.3,0,0,0-19.7,61.8l-20.6-2.8A206.3,206.3,0,0,1,115,203.7Z" transform="translate(-79.4 -108.6)" fill="#f39124"/>
    <path d="M145.1,260.5l22.6,5.8c.6-2.3,1.3-4.7,2-7l-22.3-7Q146.2,256.4,145.1,260.5Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M143.8,265.9l22.8,5,.6-2.4-22.7-5.5Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M141.8,276.9l23.1,3.4.4-2.5-23-3.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M140.2,293.5l23.3,1c0-.8.1-1.7.1-2.5l-23.3-1.4C140.3,291.6,140.3,292.6,140.2,293.5Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M140.1,304.7l23.4-.6c0-.8,0-1.7,0-2.5l-23.4.2C140.1,302.7,140.1,303.7,140.1,304.7Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M422.9,241.7l1.1,2.3,21.3-9.7-1.2-2.6Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M165.3,323l-.4-2.5L141.8,324l.5,2.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M168.4,336.9l-.7-2.4-22.6,5.8.8,2.8Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M164,313.6l-.2-2.5-23.3,1.8c.1,1,.2,1.9.3,2.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M289.4,173.6h.9v-1.7h-.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M152.3,152.9q-6,6-11.4,12.3l3.6,3.1q5.3-6.2,11.1-12a205.2,205.2,0,0,1,38-30l-2.5-4.1A210.1,210.1,0,0,0,152.3,152.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M254.7,114l.9,3.9a188.1,188.1,0,0,1,86.1-.6l.9-3.9a192.2,192.2,0,0,0-87.9.6Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M443.8,200.4a175.4,175.4,0,0,1,13.9,23.7l40.9-19.8a219.4,219.4,0,0,0-17.5-29.9Z" transform="translate(-79.4 -108.6)" fill="#f39124" opacity=".4"/>
    <path d="M461.5,232.5a174.1,174.1,0,0,1,8.7,26.1l44.1-10.8a217.9,217.9,0,0,0-10.9-32.9Z" transform="translate(-79.4 -108.6)" fill="#f39124" opacity=".2"/>
    <path d="M516.7,259l-44.6,8.5a174.7,174.7,0,0,1,2.9,24.6l45.3-2.1A222.2,222.2,0,0,0,516.7,259Z" transform="translate(-79.4 -108.6)" fill="#f39124" opacity=".1"/>
    <path d="M107.1,329.6l-.5-3.8-8.6,1.1c.2,1.3.3,2.7.5,4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M128.7,393.7l-1.8-3.4-7.8,4,1.9,3.6Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M319.2,503.1l4-.4-1-8.6-3.9.4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M312.1,503.6l4-.3-.7-8.6-3.9.3Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M337.3,500.6l-1.6-8.5-3.8.7,1.4,8.5Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M252.6,498.5l2-8.5-3.8-.9-2.2,8.4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M235.1,484.3l-3.6-1.3-3.1,8.2,3.8,1.4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M294.9,504l.2-8.7h-3.9l-.4,8.6Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M281.5,494.5l-3.9-.4-1,8.6,4,.4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M273.6,502.3l1.1-8.6-3.8-.5-1.3,8.6Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M151.9,427.2l-2.5-3-6.8,5.6,2.6,3.1Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M210.1,473.5l-3.4-1.8-4.2,7.7,3.6,1.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M176.2,451l-3-2.5-5.7,6.7,3.1,2.6Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M187,459.3l-3.1-2.3-5.2,7,3.3,2.4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M319.9,466.5a12.6,12.6,0,1,0,12.6,12.6A12.6,12.6,0,0,0,319.9,466.5Zm0,24.3a11.7,11.7,0,1,1,11.7-11.7A11.7,11.7,0,0,1,319.9,490.8Z" transform="translate(-79.4 -108.6)" fill="#f39124"/>
    <path d="M275.1,213.1l.9,3.3a87.3,87.3,0,1,1,1.5,168.4l-.9,3.4a90.8,90.8,0,1,0-1.6-175.1Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M256.9,232.4l3.2,5.1a74,74,0,0,1,12.3-6.3l-2.2-5.7A80.1,80.1,0,0,0,256.9,232.4Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M239.7,246.9l4.5,4a74.7,74.7,0,0,1,10.1-9.4l-3.7-4.8A81.4,81.4,0,0,0,239.7,246.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M294.8,220.1a80.4,80.4,0,0,0-17.5,3.1l1.7,5.8a74.3,74.3,0,0,1,16.2-2.8Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M302.3,219.9l-.2,6.1a74.4,74.4,0,0,1,16.3,2.3l1.5-5.9A80.2,80.2,0,0,0,302.3,219.9Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
    <path d="M327.1,224.7l-2.1,5.7a74.6,74.6,0,0,1,49.1,65.3l6.1-.4A80.7,80.7,0,0,0,327.1,224.7Z" transform="translate(-79.4 -108.6)" fill="#14becd"/>
  </svg>
    </div>
    <div class="square square3">
        <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 550.1 550.1" preserveAspectRatio="none">
  <title>
    circ4
  </title>
  <g data-name="Layer 1" style="isolation:isolate">
    <path d="M252.6,301.9a50.2,50.2,0,0,0,14,34.8L253,350.2l1.7,1.7,13.5-13.5a50.4,50.4,0,0,0,71.2-71.2l13-13-1.7-1.7-13,13a50.4,50.4,0,0,0-85.2,36.5Zm50.4-48a48,48,0,1,1-48,48A48.1,48.1,0,0,1,303,253.9Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M306.2,267.8l1.2-11.2h-.8l-.8,11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M302.6,267.6V256.4h-.8l.4,11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M301.4,267.6l-.4-11.2h-.8l.8,11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M304.2,256.4h-.8v11.2h.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M305.8,256.5H305l-.4,11.2h.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M270.2,291.7l-10.7-3.5-.2.8,10.8,3.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.5,288.3l-10.2-4.6-.3.8,10.4,4.2Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M269.9,292.9l-10.8-3.1-.2.8,10.9,2.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271,289.5l-10.4-4.2-.3.8,10.5,3.8Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M269.3,295.2l-11-2.3v.8l11,1.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M269.6,294l-10.9-2.7-.2.8,11,2.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M269,297.5,257.8,296v.8l11.2,1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M269.1,296.4l-11-1.9v.8l11.1,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M275,282.1l-9.1-6.6-.5.7,9.3,6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M275.7,281.1l-8.8-6.9-.5.7,9.1,6.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M277.2,279.3l-8.3-7.5-.5.6,8.6,7.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.8,298.7l-11.2-1.2v.8l11.2.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.5,286.2l-9.9-5.3-.4.7,10.1,4.9Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M273.7,284.1l-9.5-5.9-.4.7,9.7,5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M274.3,283.1l-9.3-6.3-.4.7,9.5,5.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M276.5,280.2l-8.6-7.2-.5.7,8.8,6.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M335.2,289.9l10.5-3.8-.3-.8L335,289.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M335.6,291.1l10.7-3.5-.3-.8-10.5,3.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.7,288.8l10.4-4.2-.3-.8-10.2,4.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M335.9,292.2l10.8-3.1-.2-.8-10.7,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M336.3,293.4l10.9-2.7-.2-.8-10.8,3.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.2,287.7l10.2-4.6-.3-.8-10.1,4.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.6,284.5l9.7-5.6-.4-.7-9.5,5.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331.3,282.5l9.3-6.3-.5-.7-9.1,6.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M336.5,294.5l11-2.3-.2-.8-10.9,2.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.7,286.6l10.1-4.9-.4-.7-9.9,5.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.2,285.6l9.9-5.3-.4-.7-9.7,5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M330.6,281.5l9.1-6.6-.5-.7-8.8,6.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M327.5,277.9l8.1-7.8-.6-.6-7.8,8.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M327,326.5l7.8,8.1.6-.6-8.1-7.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M278.5,326l-8.1,7.8.6.6,7.8-8.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M337.2,299.3l11.2-.8v-.8l-11.2,1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M337,296.9l11.1-1.6v-.8l-11,1.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M337.3,300.5l11.2-.4c0-.3,0-.6,0-.8l-11.2.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M337.1,298.1l11.2-1.2v-.8l-11.1,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M336.8,295.7l11-1.9v-.8l-11,2.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M323.9,274.7l6.9-8.8-.7-.5-6.6,9.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M315.5,270l4.2-10.4-.8-.3-3.8,10.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M313.3,269.2l3.5-10.7-.8-.2-3.1,10.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M314.4,269.6l3.8-10.5-.8-.3L314,269.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M317.7,270.9l4.9-10.1-.8-.3-4.6,10.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M316.6,270.4l4.6-10.2-.8-.3-4.2,10.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M310.9,268.5l2.7-10.9-.8-.2-2.3,11Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M312.1,268.8l3.1-10.8-.8-.2-2.7,10.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M308.6,268.1l2-11h-.8L308.2,268Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M309.8,268.3l2.3-11h-.8l-1.9,11Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M318.8,271.5l5.3-9.9-.7-.4-4.9,10.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M325.7,276.2l7.5-8.3-.6-.5-7.2,8.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M326.6,277l7.8-8.1-.6-.6-7.5,8.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.8,280.6l8.8-6.9-.5-.7-8.6,7.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M328.3,278.7l8.3-7.5-.6-.6-8.1,7.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M324.8,275.4l7.2-8.6-.7-.5-6.9,8.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.1,279.6l8.6-7.2-.5-.6-8.3,7.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M321.9,273.3l6.3-9.3-.7-.5-5.9,9.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M319.9,272.1l5.6-9.7-.7-.4-5.3,9.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M320.9,272.7l5.9-9.5-.7-.4-5.6,9.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M322.9,274l6.6-9.1-.7-.5-6.3,9.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M307.4,267.9l1.6-11.1h-.8L307,267.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331.9,283.5l9.5-5.9-.5-.7-9.3,6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M302.5,336.3h-.4l-.4,11.2h.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M318.3,332.7l4.9,10.1.7-.4-5.3-9.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M316.1,333.7l4.2,10.4.8-.3-4.6-10.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M320.4,331.5l5.6,9.7.7-.4-5.9-9.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M317.2,333.2l4.6,10.2.8-.3L317.6,333Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M325.2,328.1l7.2,8.6.6-.5-7.5-8.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M324.3,328.8l6.9,8.8.6-.5-7.2-8.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M315,334.1l3.8,10.5.8-.3L315.4,334Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M323.4,329.6l6.6,9.1.7-.5-6.9-8.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M322.4,330.3l6.3,9.3.7-.5-6.6-9.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M321.4,330.9l5.9,9.5.7-.4-6.3-9.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M319.3,332.1l5.3,9.9.7-.4-5.6-9.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M305.6,336.2l.8,11.2h.8l-1.2-11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M308,335.9l1.6,11.1h.8l-1.9-11Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M306.8,336.1l1.2,11.2h.8L307.3,336Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M313.8,334.5l3.5,10.7.8-.3-3.8-10.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M303.7,336.3h-.4v11.2h.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M305.7,347.4l-.8-11.2h-.4l.4,11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M312.7,334.9l3.1,10.8.8-.2-3.5-10.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M311.6,335.2l2.7,10.9.8-.2L312,335.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M310.4,335.5l2.3,11,.8-.2-2.7-10.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M309.2,335.7l1.9,11h.8l-2.3-11Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M326.1,327.3l7.5,8.3.6-.6-7.8-8.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.7,299.9l-11.2-.8c0,.3,0,.6,0,.8l11.2.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331.6,320.9l9.3,6.3.4-.7-9.5-5.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M330.9,321.9l9.1,6.6.5-.7-9.3-6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M330.2,322.9l8.8,6.9.5-.7-9.1-6.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M327.9,325.6l8.1,7.8.6-.6-8.3-7.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M328.7,324.7l8.3,7.5.5-.6-8.6-7.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.5,315.7l10.2,4.6.3-.8-10.4-4.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.4,323.8,338,331l.5-.6-8.8-6.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334,316.8l10.1,4.9.3-.8-10.2-4.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.4,317.8l9.9,5.3.4-.7-10.1-4.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.8,318.9l9.7,5.6.4-.7-9.9-5.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.2,319.9l9.5,5.9.4-.7-9.7-5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.8,316.2l-10.2,4.6.3.8,10.1-4.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.8,318.4l-9.9,5.3.4.7,9.7-5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.3,317.3l-10.1,4.9.4.7,9.9-5.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.3,315.1l-10.4,4.2.3.8,10.2-4.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M270.9,314l-10.5,3.8.3.8,10.4-4.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M276.9,324.3l-8.6,7.2.5.6,8.3-7.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M274.1,320.4l-9.5,5.9.4.7,9.3-6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M270.5,312.9l-10.7,3.5.3.8,10.5-3.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M300.1,347.4h.8l.4-11.2h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M276.2,323.3l-8.8,6.9.5.6,8.6-7.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.7,303.5l-11.2.4c0,.3,0,.6,0,.8l11.2-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M270.1,311.8l-10.8,3.1.2.8,10.7-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.7,301.1l-11.2-.4c0,.3,0,.5,0,.8h11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.7,302.3H257.5c0,.3,0,.6,0,.8l11.2-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.9,305.9l-11.1,1.2v.8l11.1-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M269.5,309.4l-11,2.3.2.8,10.9-2.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M269.8,310.6l-10.9,2.7.2.8,10.8-3.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M269.3,308.3l-11,1.9v.8l11-2.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M274.7,321.4l-9.3,6.3.5.7,9.1-6.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M292.7,334.7l-3.5,10.7.8.2,3.1-10.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M293.8,335l-3.1,10.8.8.2,2.7-10.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M289.3,333.4l-4.6,10.2.8.3,4.2-10.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M290.4,333.9l-4.2,10.4.8.3,3.8-10.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M291.5,334.3l-3.8,10.5.8.3,3.5-10.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M295,335.3l-2.7,10.9.8.2,2.3-11Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M296.1,335.6l-2.3,11h.8l1.9-11Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M298.5,336l-1.6,11.1h.8l1.2-11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M299.7,336.1l-1.2,11.2h.8l.8-11.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M297.3,335.8l-1.9,11h.8l1.6-11.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M281.2,328.4,274,337l.6.5,6.9-8.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M282.1,329.2l-6.9,8.8.7.5,6.6-9.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M283.1,329.9l-6.6,9.1.7.5,6.3-9.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M288.2,332.9,283.3,343l.8.3,4.6-10.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M280.3,327.7l-7.5,8.3.6.5,7.2-8.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M279.4,326.8l-7.8,8.1.6.6,7.5-8.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M287.1,332.4l-5.3,9.9.7.4,4.9-10.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M286.1,331.8l-5.6,9.7.7.4,5.3-9.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M284.1,330.6l-6.3,9.3.7.4,5.9-9.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M285.1,331.2l-5.9,9.5.7.4,5.6-9.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M273,274.5l.6.5h0l4.1,3.7.3-.3-4-3.9a39.7,39.7,0,0,1,25.2-12.3v-.5l.6,6.1h.4l-.8-11.2h-.8l.5,4.8A40.5,40.5,0,0,0,273.5,274l-3.5-3.4-.6.6,3.6,3.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M342.9,301h0l-5.6.2v.4h5.5v.3a39.8,39.8,0,0,1-2.1,12.8h.4l-5.7-1.9v.4l10.5,3.8.3-.8-4.6-1.5a40.6,40.6,0,0,0,2.1-13.1v-.3h4.9c0-.3,0-.6,0-.8l-5.3.2Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M284.8,275.9l.5.6.3-.2-.4-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M286.2,274.9l.4.7.3-.2-.4-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M283.5,276.9l.5.6.3-.3-.5-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M281.3,278.7l-.3.3.6.6.3-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M287.6,274.1l.4.7.4-.2-.4-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M282.2,277.9l.5.6.3-.3-.5-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M293.7,271.5l.2.8h.4l-.2-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M289.1,273.3l.4.7.4-.2-.3-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M297,270.7l.2.8h.4v-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M298.6,270.4v.8h.4v-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M295.3,271.1l.2.8h.4l-.2-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M290.6,272.6l.3.7h.4l-.3-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M292.2,272l.3.8h.4l-.2-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M280.1,279.9l-.3.3.6.5.3-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.2,302.6c0,.1,0,.3,0,.5h.8c0-.1,0-.3,0-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.9,291.6l.8.2v-.4l-.8-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.4,293.1l.8.2V293l-.8-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.7,296.4h.8v-.4l-.8-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M300.3,270.2v.8h.4v-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.2,301.4h.8v-.4h-.8C271.2,301.1,271.2,301.2,271.2,301.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.4,298h.8v-.4h-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.3,299.7h.8v-.4h-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272,294.7l.8.2v-.4l-.8-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M273.5,290l.7.3.2-.4-.7-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M275.7,285.5l.7.4.2-.3-.7-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M277.6,282.8l.6.5.3-.3-.6-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M276.6,284.1l.7.4.2-.3-.6-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M274.2,288.5l.7.3.2-.4-.7-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M274.9,287l.7.4.2-.4-.7-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M278.7,281.5l.6.5.3-.3-.6-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M330.9,288.4l.2.4.7-.3-.2-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M324.7,278.7l-.5.6.3.3.6-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M330.2,287l.2.4.7-.4-.2-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.3,285.6l.2.3.7-.4-.2-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M328.4,282.8l-.3-.4-.6.5.2.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M325.9,279.9l-.6.6.3.3.6-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M327,281.1l-.6.5.3.3.6-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M328.4,284.2l.2.3.7-.4-.3-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.7,297.7v.4h.8v-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.5,296.1v.4h.8v-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.9,299.3v.4h.8v-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.7,292.9v.4l.8-.2v-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.1,294.5v.4l.8-.2v-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.2,291.4v.4l.8-.2v-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331.6,289.9v.4l.8-.3-.2-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M315,272.5l-.3.7h.4l.3-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M308.5,271.4h.4l.2-.8h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M323,278.2l.3.3.5-.6-.3-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M311.8,271.4l-.2.8h.4l.2-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M305.3,270.2v.8h.4v-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M306.8,271.2h.4v-.8h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M304.1,270.1h-.5v.8h.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M313.4,271.9l-.2.8h.4l.3-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M310.2,271l-.2.8h.4l.2-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M321.2,275.9l-.4-.3-.4.7.3.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M322.5,276.9l-.4-.3-.5.6.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M319.8,274.9l-.4-.2-.4.7.3.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M316.9,273.3l-.4-.2-.3.7.4.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M302.4,270.1h-.5v.8h.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M318.4,274.1l-.4-.2-.4.7.4.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M280.1,324l.6-.6-.3-.3-.6.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M320.8,328.3l.4-.3-.5-.6-.3.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M306.9,333.5h.4v-.8h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M322.2,327.3l.4-.3-.5-.6-.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M323.5,326.3l.3-.3-.5-.6-.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M325.9,324l.3-.3-.6-.5-.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M318,330l.4-.2-.4-.7-.4.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M324.7,325.2l.3-.3-.6-.6-.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M308.6,333.3h.4l-.2-.8h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M316.5,330.8l.4-.2-.4-.7-.4.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M311.8,332.5h.4l-.2-.8h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M327,322.8l.3-.3-.6-.5-.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M310.2,332.9h.4l-.2-.8H310Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M313.4,332h.4l-.3-.8h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M315,331.4l.4-.2-.3-.7h-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M319.4,329.2l.4-.2-.4-.7-.3.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.3,307.5h-.8v.4l.8.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334,309.2l-.8-.2v.4l.8.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.6,305.9h-.8v.4h.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.6,310.8l-.8-.2v.4l.8.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.7,304.2h-.8v.4h.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.8,300.9H334c0,.1,0,.3,0,.4h.8C334.8,301.2,334.8,301,334.8,300.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.8,302.6H334c0,.1,0,.3,0,.4h.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.3,318.3l.7.4.2-.4-.7-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M328.1,321.5l.3-.4-.6-.5-.2.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331.1,316.9l-.7-.4-.2.4.7.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.1,320.2l.3-.4-.7-.4-.2.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331.8,315.4l-.7-.3-.2.4.7.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M333.1,312.4l-.8-.3v.4l.8.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.5,313.9l-.8-.3v.4l.7.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M285.2,328.3l.4-.7-.3-.2-.5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M276.7,318.3l-.2-.3-.7.4.2.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M275.1,315.5l-.2-.4-.7.3.2.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M275.8,316.9l-.2-.4-.7.4.2.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M283,325.7l-.3-.3-.5.6.3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M281.3,325.2l.5-.6-.3-.3-.6.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M279,322.8l.6-.5-.3-.3-.6.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M277.9,321.5l.6-.5-.2-.3-.6.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M277.6,319.7l-.2-.3-.7.4.3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.5,307.8v-.4h-.8v.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.3,306.2v-.4h-.8v.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.9,309.4V309l-.8.2v.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M274.4,314v-.4l-.7.3.2.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M273.8,312.5v-.4l-.8.3v.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M273.3,311v-.4l-.8.2v.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M292.6,332l.2-.8h-.4l-.3.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M297.4,333.3v-.8h-.4l-.2.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M295.8,332.9l.2-.8h-.4l-.2.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M299.1,333.5v-.8h-.4v.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M304,332.9h-.4v.8h.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M294.2,332.5l.2-.8H294l-.2.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M302.4,333H302v.8h.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M300.7,333.7v-.8h-.4v.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M272.1,304.6v-.4h-.8v.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M286.6,329.2l.4-.7-.3-.2-.4.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M288,330l.4-.7-.4-.2-.4.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M283.8,327.3l.5-.6-.3-.2-.5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M289.5,330.8l.3-.7-.4-.2-.4.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M305.7,333.7v-.8h-.4v.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M291,331.4l.3-.8h-.4l-.3.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M280.6,317.5h-1.9a29.4,29.4,0,0,0,2.1,2.9h2.1A27.9,27.9,0,0,1,280.6,317.5Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M280.6,286.4a27.9,27.9,0,0,1,2.3-2.9h-2.1a28.9,28.9,0,0,0-2.1,2.9Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M325.4,317.5a27.4,27.4,0,0,1-2.3,2.9h2.1a29.4,29.4,0,0,0,2.1-2.9Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M325.4,286.4h1.9a28.9,28.9,0,0,0-2.1-2.9h-2.1A27.4,27.4,0,0,1,325.4,286.4Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M190.6,464.6a198,198,0,0,0,183.3,22l-2.2-5.6,5.8,15,1.6-.6-9.7-24.6-1.4.5,3.6,9.3A191.5,191.5,0,0,1,125.1,372.2l-6,2.4A197.4,197.4,0,0,0,190.6,464.6Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M444.7,439.8l-4.6-4.5a192.5,192.5,0,0,1-30.5,25.5l3.6,5.3A198.8,198.8,0,0,0,444.7,439.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M303,110.7A190.5,190.5,0,0,1,473.7,215.5l-8.9,4.5.5,1,23.7-11.8-.6-1.2-11.8,6,2.9-1.5a197.9,197.9,0,0,0-250-94.1l2.4,5.9A190.3,190.3,0,0,1,303,110.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M303,156.2a146,146,0,0,0-133,86h-.6a3.5,3.5,0,1,0,2.1.7A144.4,144.4,0,0,1,303,157.8c79.5,0,144.2,64.7,144.2,144.2a145.5,145.5,0,0,1-2,23.8,3.5,3.5,0,1,0,1.6.3,147.2,147.2,0,0,0,2-24C448.8,221.6,383.4,156.2,303,156.2ZM169.4,247.5a1.9,1.9,0,1,1,1.9-1.9A1.9,1.9,0,0,1,169.4,247.5Zm276.1,83.6a1.9,1.9,0,1,1,1.9-1.9A1.9,1.9,0,0,1,445.4,331.1Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M303,170.6a132,132,0,0,0-26.6,2.7,2.3,2.3,0,1,0,.2.9h0a131.3,131.3,0,0,1,26.5-2.7c72,0,130.6,58.6,130.6,130.6A130.8,130.8,0,0,1,418.4,363l-.9-.2a2.4,2.4,0,1,0,1.6.6,131.6,131.6,0,0,0,15.3-61.5C434.4,229.5,375.4,170.6,303,170.6Zm-28.8,5.2a1.6,1.6,0,1,1,1.6-1.6A1.6,1.6,0,0,1,274.2,175.7Zm143.3,191a1.6,1.6,0,1,1,1.6-1.6A1.6,1.6,0,0,1,417.5,366.7Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M419.6,320.8l6.3,1a125.6,125.6,0,0,0,1.6-19.9,123.7,123.7,0,0,0-23.1-72.2l-5.2,3.7a118.6,118.6,0,0,0-63.9-45.1l.7-2.3a120.7,120.7,0,0,0-33-4.6,119.4,119.4,0,0,0-72.8,24.5,121.4,121.4,0,0,0-42.8,62l2.3.7a118.3,118.3,0,0,0,34.2,121.1l1.3-1.5-5.6,6.2a125.2,125.2,0,0,0,16.1,12.3l4.6-7.1-1.1,1.7a116.9,116.9,0,0,0,42.7,16.9l-.4,2.4a121.8,121.8,0,0,0,21.5,1.9,119.6,119.6,0,0,0,50.7-11.1l-1-2.2A117.9,117.9,0,0,0,419.6,320.8Zm-67.8,86.5-1.9-4a110.8,110.8,0,0,1-47,10.3,112.9,112.9,0,0,1-20-1.8l-.8,4.3.4-2A112.9,112.9,0,0,1,241.3,398l3.5-5.4a108.9,108.9,0,0,1-13.9-10.6l-4.3,4.8a114.3,114.3,0,0,1-33.1-117l-1.9-.6,4.2,1.2c13.9-47.2,57.9-80.2,107.2-80.2a111.8,111.8,0,0,1,30.6,4.2l.7-2.3A114.6,114.6,0,0,1,396,235.8l-5.2,3.7a107,107,0,0,1,19.9,62.4,109.2,109.2,0,0,1-1.4,17.2l8.3,1.3-2-.3A113.9,113.9,0,0,1,351,405.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M279.5,253.9a52.8,52.8,0,0,1,9.3-3.5l-3.2-11.6a65.1,65.1,0,0,0-11.4,4.3Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M249.7,298.3a53.5,53.5,0,0,1,1.6-9.8l-11.6-3a65.2,65.2,0,0,0-2,12Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M237.6,298.9c0,1-.1,2-.1,3a65.3,65.3,0,0,0,.6,9.2l11.9-1.7a53.2,53.2,0,0,1-.5-7.5c0-.8,0-1.6.1-2.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M261.2,268.6l-9.4-7.5a65.4,65.4,0,0,0-6.7,10.2l10.6,5.6A53.6,53.6,0,0,1,261.2,268.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M255.2,278l-10.7-5.4A64.5,64.5,0,0,0,240,284l11.6,3.3A53.3,53.3,0,0,1,255.2,278Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M262,267.6a54.3,54.3,0,0,1,7.1-7l-7.6-9.3a65.9,65.9,0,0,0-8.7,8.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M290,250.1a53,53,0,0,1,9.8-1.5l-.7-12a65.5,65.5,0,0,0-12.1,1.9Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M331.8,256.9l6.5-10.1a65.5,65.5,0,0,0-10.8-5.6L323,252.4A53.4,53.4,0,0,1,331.8,256.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M338.1,261.7l8.5-8.5a66.1,66.1,0,0,0-7.1-5.6l-6.7,10A53.9,53.9,0,0,1,338.1,261.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M262.8,337.1a53.4,53.4,0,0,1-4.4-5.8l-10,6.6a65.9,65.9,0,0,0,5.9,7.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M250.2,310.6l-11.9,2a64.9,64.9,0,0,0,3.1,11.8l11.3-4.1A52.9,52.9,0,0,1,250.2,310.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M321.8,251.9l4.2-11.2a65.3,65.3,0,0,0-11.8-3.2l-2.1,11.8A53.2,53.2,0,0,1,321.8,251.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M284.1,352l-4.2,11.2a64.8,64.8,0,0,0,11.8,3.2l2.1-11.8A53.1,53.1,0,0,1,284.1,352Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".5"/>
    <path d="M327.5,349.4l5.5,10.7a65.4,65.4,0,0,0,10.3-6.6l-7.4-9.4A53.9,53.9,0,0,1,327.5,349.4Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".8"/>
    <path d="M304.8,355.4H303a53.4,53.4,0,0,1-8.1-.6l-1.8,11.9a65.7,65.7,0,0,0,9.9.8h2.3Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".5"/>
    <path d="M315.9,353.8a53.5,53.5,0,0,1-9.8,1.5l.7,12a65.1,65.1,0,0,0,12.1-1.8Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".6"/>
    <path d="M326.4,350a53.1,53.1,0,0,1-9.3,3.5l3.2,11.6a65.4,65.4,0,0,0,11.4-4.3Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".7"/>
    <path d="M274.1,346.9,267.7,357a65.8,65.8,0,0,0,10.8,5.6l4.5-11.2A53.4,53.4,0,0,1,274.1,346.9Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".3"/>
    <path d="M267.8,342.2l-8.5,8.5a65.8,65.8,0,0,0,7.1,5.5l6.7-10A54.1,54.1,0,0,1,267.8,342.2Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".2"/>
    <path d="M343.3,266.8a54.8,54.8,0,0,1,4.4,5.7l10-6.6a65.7,65.7,0,0,0-5.9-7.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M353.2,283.6a53.1,53.1,0,0,1,2.5,9.6l11.9-2a65.2,65.2,0,0,0-3.1-11.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M356.3,305.7a53.3,53.3,0,0,1-1.6,9.8l11.6,3a65.1,65.1,0,0,0,2-12.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M343.9,336.3a54.2,54.2,0,0,1-7.1,7l7.6,9.3a66.1,66.1,0,0,0,8.7-8.6Z" transform="translate(-27.9 -26.9)" fill="#f39124" opacity=".9"/>
    <path d="M344.7,335.3l9.4,7.5a65.9,65.9,0,0,0,6.7-10.2L350.2,327A53.7,53.7,0,0,1,344.7,335.3Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path fill="#f39124" d="M344.9 273.9H367.59999999999997V275.5H344.9z"/>
    <path fill="#f39124" d="M182.3 273.9H205V275.5H182.3z"/>
    <path d="M291.6,204.9l-.2-1.6h-1.1l.2,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M288.3,205.4l-.2-1.6-1.1.2.3,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M298.4,204.4v-1.6h-1.1v1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M295,204.6V203h-1.1l.2,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M284.9,206l-.3-1.6-1.1.2.3,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M278.2,207.4l-.4-1.6-1.1.3.4,1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M275,208.4l-.4-1.5-1.1.3.5,1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M281.6,206.6l-.3-1.6-1.1.3.4,1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M271.7,209.4l-.5-1.5-1.1.4.5,1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M301.8,204.3v-1.6h-1.1v1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M322.5,204.6l-1.1-.2-.3,1.6,1.1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M335.9,208.3l-1.1-.4-.5,1.5,1,.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M305.3,202.7h-1.1v1.6h1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M342.3,210.8l-1-.4-.6,1.5,1,.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M332.6,207.2l-1.1-.3-.4,1.5,1,.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M345.5,212.2l-1-.5-.7,1.5,1,.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M339.1,209.5l-1.1-.4-.6,1.5,1,.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M315.7,203.5h-1.1l-.2,1.6h1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M268.5,210.6l-.6-1.5-1.1.4.6,1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M329.2,206.2l-1.1-.3-.4,1.6,1.1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M325.9,205.3l-1.1-.3-.3,1.6,1.1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M214.7,260.2l-1.4-.7-.5,1,1.5.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M223.3,245.5l-1.3-.9-.6.9,1.3.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M225.3,242.8l-1.3-1-.7.9,1.3.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M227.5,240.1l-1.2-1-.7.9,1.3,1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M221.4,248.3l-1.3-.9-.6.9,1.4.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M229.7,237.5l-1.2-1.1-.7.9,1.2,1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M216.2,257.1l-1.4-.7-.5,1,1.4.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M357.5,219l-.9-.6-.9,1.4.9.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M219.6,251.2l-1.4-.8-.6,1,1.4.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M213.3,263.3l-1.5-.6-.4,1,1.5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M217.8,254.1l-1.4-.8-.6,1,1.4.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M232,235l-1.2-1.1-.8.8,1.2,1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M259.1,214.7l-.7-1.4-1,.5.7,1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M256.1,216.3l-.8-1.4-1,.6.8,1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M234.9,229.8l1.1,1.2.8-.7-1.1-1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M262.2,213.2l-.7-1.5-1,.5.7,1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M250.3,219.8l-.9-1.4-.9.6.9,1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M265.3,211.8l-.6-1.5-1,.4.6,1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M253.2,218l-.8-1.4-1,.6.8,1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M247.4,221.6l-.9-1.3-.9.6.9,1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M239.4,227.9l-1-1.2-.9.8,1.1,1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M242,225.7l-1-1.3-.9.7,1,1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M244.7,223.6l-.9-1.3-.9.7,1,1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M214.2,342.7l-1.5.7.5,1,1.4-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M312.2,203.1h-1.1v1.6h1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M212,266.4l-1.5-.6-.4,1.1,1.5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M232.4,232.2l1.1,1.1.8-.8-1.1-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M348.6,213.8l-1-.5-.7,1.4,1,.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M308.8,202.8h-1.1v1.6h1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M319.1,204l-1.1-.2-.2,1.6,1.1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M365.9,225.2l-.9-.7-1,1.3.8.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M351.6,215.4l-1-.6-.8,1.4,1,.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M373.6,232.2l-.8-.8-1.1,1.1.8.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M360.4,221l-.9-.6-.9,1.3.9.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M354.6,217.2l-1-.6-.8,1.4.9.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M232.4,371.7l.8.8,1.1-1.1-.8-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M225.5,364l.7.9,1.2-1-.7-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M257.4,390.1l1,.5.7-1.4-1-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M290.3,400.4h1.1l.2-1.6h-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M371.6,371.4l1.1,1.1.8-.8-1.1-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M297.2,401.1h1.1v-1.6h-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M276.7,397.7l1.1.3.4-1.6-1.1-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M363.2,223l-.9-.7-.9,1.3.9.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M245.6,382.9l.9.6.9-1.3-.9-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400.6,297.4h1.6v-1.1h-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M240.1,378.7l.9.7,1-1.3-.8-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M230,369.2l.8.8,1.2-1.1-.7-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M388.7,255.1l1.4-.8-.6-1-1.4.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M380.5,239.9l-.7-.9-1.2,1,.7.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M384.6,245.5l-.6-.9-1.3.9.6.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400.4,294H402v-1.1l-1.6.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M385.2,249.2l1.4-.9-.6-1-1.3.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M382.6,242.7l-.7-.9-1.3,1,.7.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M366.7,227.9l.8.7,1.1-1.2-.9-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M369.2,230.2l.8.7,1.1-1.2-.8-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M378.3,237.3l-.7-.9-1.2,1.1.7.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M376,234.7l-.8-.8L374,235l.7.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M387,252.1l1.4-.8-.6-1-1.4.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M398.3,280.5l1.6-.3-.3-1.1-1.6.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M397.5,277.2l1.6-.4-.3-1.1-1.5.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M396.6,273.9l1.5-.4-.3-1.1-1.5.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M399,283.9l1.6-.3-.2-1.1-1.6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M390.3,258.1l1.4-.7-.5-1-1.4.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400,290.6l1.6-.2v-1.1l-1.6.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M393.1,264.3l1.5-.6-.4-1-1.5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M391.8,261.2l1.5-.7-.5-1-1.4.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M395.6,270.7l1.5-.5-.4-1.1-1.5.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M394.4,267.5l1.5-.6-.4-1.1-1.5.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M399.6,287.2l1.6-.2-.2-1.1-1.6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M352.8,385.9l.8,1.4,1-.6-.8-1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M349.9,387.6l.8,1.4,1-.6-.8-1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M355.7,384.2l.9,1.4.9-.6-.9-1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M343.8,390.7l.7,1.5,1-.5-.7-1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M346.8,389.2l.7,1.4,1-.5-.7-1.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M374,368.9l1.2,1.1.8-.8-1.2-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M366.6,376l1,1.2.9-.7-1.1-1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M304.1,399.6v1.6h1.1v-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M369.2,373.7l1.1,1.2.8-.8L370,373Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M364,378.2l1,1.3.9-.7-1-1.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M340.6,392.1l.6,1.5,1-.4-.6-1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M361.3,380.3l.9,1.3.9-.7-1-1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M321.1,397.9l.3,1.6,1.1-.2-.3-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M337.5,393.3l.6,1.5,1.1-.4-.6-1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M314.4,399l.2,1.6h1.1l-.2-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M307.6,399.5v1.6h1.1v-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M311,399.3v1.6h1.1l-.2-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M317.7,398.5l.2,1.6,1.1-.2-.3-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M331,395.5l.4,1.5,1.1-.3-.5-1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M334.3,394.5l.5,1.5,1.1-.4-.5-1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M324.4,397.3l.3,1.6,1.1-.3-.4-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M327.7,396.5l.4,1.6,1.1-.3-.4-1.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M358.6,382.3l.9,1.3.9-.6-.9-1.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M398.1,324.5l1.6.4.3-1.1-1.6-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M398.8,321.1l1.6.3.2-1.1-1.6-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M395.2,334.3l1.5.5.4-1.1-1.5-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M399.4,317.8l1.6.3.2-1.1-1.6-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M397.2,327.8l1.5.4.3-1.1-1.6-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M396.3,331l1.5.5.3-1.1-1.5-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400.7,304.2h1.6c0-.4,0-.8,0-1.1h-1.6C400.7,303.5,400.7,303.9,400.7,304.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M376.3,366.4l1.2,1.1.7-.9-1.2-1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400.5,307.6h1.6v-1.1h-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M399.9,314.4l1.6.2v-1.1l-1.6-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400.3,311l1.6.2V310h-1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M400.7,300.8h1.6c0-.4,0-.8,0-1.1h-1.6C400.7,300.1,400.7,300.4,400.7,300.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M384.6,355.6l1.3.9.6-.9-1.4-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M394,337.5l1.5.6.4-1.1-1.5-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M382.7,358.4l1.3.9.6-.9-1.3-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M381.3,360.3l-.7.9,1.3,1,.7-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M378.5,363.8l1.2,1,.7-.9-1.3-1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M386.4,352.7l1.4.8.6-1-1.4-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M391.3,343.7l1.4.7.5-1-1.5-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M392.7,340.6l1.5.6.5-1-1.5-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M388.1,349.8l1.4.8.6-1-1.4-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M389.8,346.8l1.4.7.5-1-1.4-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M211.6,336.4l-1.5.6.4,1.1,1.5-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M207.7,323.4l-1.6.3.3,1.1,1.6-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M206.4,316.7l-1.6.2.2,1.1,1.6-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M207,320.1l-1.6.3.2,1.1,1.6-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.6,309.9H204v1.1l1.6-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M206,313.3l-1.6.2v1.1l1.6-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M210.8,269.6l-1.5-.5-.4,1.1,1.5.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M212.9,339.6l-1.5.6.4,1,1.5-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.4,306.5h-1.6v1.1h1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M209.4,330l-1.5.4.3,1.1,1.5-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M210.5,333.2l-1.5.5.4,1.1,1.5-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M208.5,326.7l-1.6.4.3,1.1,1.5-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M207.2,282.8l-1.6-.3-.2,1.1,1.6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M207.9,279.4l-1.6-.4-.3,1.1,1.6.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M215.7,345.8l-1.4.7.5,1,1.4-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M206.6,286.1l-1.6-.3-.2,1.1,1.6.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M209.7,272.9l-1.5-.5-.3,1.1,1.5.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M208.8,276.1l-1.5-.4-.3,1.1,1.6.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M206.1,289.5l-1.6-.2v1.1l1.6.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.3,299.7h-1.6c0,.4,0,.8,0,1.1h1.6Q205.3,300.2,205.3,299.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.3,303.1h-1.6c0,.4,0,.8,0,1.1h1.6Q205.3,303.7,205.3,303.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.5,296.3h-1.6v1.1h1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.7,292.9l-1.6-.2v1.1h1.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M217.3,348.8l-1.4.8.6,1,1.4-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M270.1,395.6l1.1.4.5-1.5-1-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M266.9,394.4l1.1.4.6-1.5-1-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M254.4,388.5l1,.6.8-1.4-1-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M263.7,393.1l1,.4.6-1.5-1-.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M260.5,391.7l1,.5.7-1.5-1-.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M273.4,396.7l1.1.3.4-1.5-1-.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M293.8,400.8h1.1v-1.6h-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M286.9,399.9l1.1.2.2-1.6-1.1-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M283.5,399.3l1.1.2.3-1.6-1.1-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M280.1,398.6l1.1.3.3-1.6-1.1-.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M234.9,374.1l.8.8,1.1-1.2-.8-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M221.4,358.4l.6.9,1.3-.9-.6-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M223.4,361.2l.7.9,1.3-1-.7-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M220.8,354.7l-1.4.9.6,1,1.3-.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M227.7,366.6l.8.9,1.2-1.1-.7-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M219,351.8l-1.4.8.6,1,1.4-.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M251.4,386.7l1,.6.8-1.4-.9-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M242.8,380.9l.9.7.9-1.3-.9-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M300.7,401.2h1.1v-1.6h-1.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M248.5,384.9l.9.6.9-1.4-.9-.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M237.5,376.5l.9.7,1-1.2-.8-.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M172.5,317.4a131.5,131.5,0,0,0,94.1,110.8,2,2,0,0,0,0,.3,2.4,2.4,0,1,0,.3-1.1,130,130,0,0,1-93.5-110.1,2.3,2.3,0,1,0-.8.1ZM269,427a1.6,1.6,0,1,1-1.6,1.6A1.6,1.6,0,0,1,269,427ZM172.6,313.5a1.6,1.6,0,1,1-1.5,1.6A1.6,1.6,0,0,1,172.6,313.5Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M190.3,397a3.4,3.4,0,0,0,1.7-.5,145.8,145.8,0,0,0,177.1,35.4,3.5,3.5,0,1,0-.9-2.3,3.6,3.6,0,0,0,.1.8,144.3,144.3,0,0,1-175.1-35.1,3.5,3.5,0,1,0-2.9,1.6Zm181.5,30.8a1.9,1.9,0,1,1-1.9,1.9A1.9,1.9,0,0,1,371.8,427.7ZM190.3,391.6a1.9,1.9,0,1,1-1.9,1.9A1.9,1.9,0,0,1,190.3,391.6Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M121.2,184.2A218,218,0,0,1,138,161.7l-1.9-1.7-5.1,6.2-.9-.7q-5.4,6.9-10.3,14.1l1,.6-1.7,2.6Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M516.6,252.8c-1-4.5-2.2-8.9-3.5-13.3l1.1-.3a217.5,217.5,0,0,0-8-22.5l-1.1.5c-1.2-3-2.5-5.9-3.9-8.8l-2.3,1.1a215.2,215.2,0,0,1,15.3,44Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M303,85.3A215.4,215.4,0,0,1,397.5,107l1.1-2.3a216.8,216.8,0,0,0-61.3-19.2l.2-1.1a223.2,223.2,0,0,0-34.2-2.7v1.1H303c-4.1,0-8.1.1-12.2.3v2.4Q296.9,85.3,303,85.3Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M520.2,330.6l-2.4-.3a215.4,215.4,0,0,1-35.6,93.4l.9.6a219.3,219.3,0,0,1-82.4,72.3l-.5-1a216.4,216.4,0,0,1-261.4-52.3l-1.9,1.6q5.3,6.2,11.1,12l4.3,4.2-.8.8a218.6,218.6,0,0,0,98.2,53.9l.3-1.1a217.8,217.8,0,0,0,23.9,4.5l-5.3.4A222.5,222.5,0,0,0,369.4,512l-5.2.4A216,216,0,0,0,392,502.3l.5,1a222.3,222.3,0,0,0,98.8-87l-1-.6a216.7,216.7,0,0,0,12.6-23.9l1,.5A218.1,218.1,0,0,0,519.6,342l-1.1-.2Q519.5,336.2,520.2,330.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M104.4,212.5l-2.3-1a221.1,221.1,0,0,0,14.8,208.3l2.2-1.4a217.6,217.6,0,0,1-14.6-205.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M227.7,137l-10.9-24.1-3.2,1.5L225,138.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M151.7,201.9l-21.9-14.5-1.9,3L150,204.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M155.2,196.7l-21.4-15.3-2,2.9,21.7,14.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M157.2,194l1.8-2.4-20.8-16-2.1,2.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M167.1,181.8l-19.6-17.4-2.3,2.7,20,17Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M171.3,177.1l-19-18.1-2.4,2.6,19.4,17.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M163,186.6l-20.2-16.7-2.2,2.8,20.6,16.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M139.2,223.9l-23.7-11.4-1.5,3.2,24,10.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M142,218.3l-23.3-12.2-1.6,3.2,23.6,11.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M148.3,207.2l-22.4-13.8-1.8,3,22.7,13.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M120.5,202.8l23.1,12.5,1.5-2.6-22.9-13Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M222,139.7l-11.8-23.7-3.2,1.6,12.2,23.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M205.5,149.1l-14.1-22.3-3,1.9,14.6,22Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M175.8,172.6l-18.4-18.8-2.5,2.5,18.8,18.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M216.4,142.7l-12.6-23.2-3.1,1.7,13,23Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M200.2,152.5l-14.9-21.8-2.9,2,15.4,21.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M136.6,229.7l-24.1-10.5-1.4,3.3,24.4,10Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M210.9,145.8,197.5,123l-3,1.8,13.8,22.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M180.4,168.3l-17.7-19.4-2.6,2.4,18.1,19Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M185.1,164.1,168.1,144l-2.7,2.3L182.9,166Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M190,160.1l-16.4-20.6-2.8,2.2,16.8,20.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M195.1,156.2,179.4,135l-2.8,2.1L192.7,158Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M95.5,292.9l26.4,1.1c0-1,.1-2,.1-3l-26.4-1.7C95.6,290.5,95.6,291.7,95.5,292.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M125.3,338l-.6-2.9-26,4.8.7,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M134.2,235.5l-24.5-9.7-1.3,3.3,24.7,9.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M123.3,325.5l-.4-3-26.3,2.9q.2,1.8.4,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M126.7,344.2l-.7-2.9-25.8,5.7.8,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M122.6,319.2c-.1-1-.2-2-.2-3l-26.4,2c.1,1.2.2,2.4.3,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M128.3,350.3l-.8-2.9L101.9,354l.9,3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M132.1,362.4l-1-2.8L106,367.9l1.2,3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M134.3,368.3l-1.1-2.8-24.8,9.2,1.3,3.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M130.1,356.4l-.9-2.9L103.8,361l1,3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M122.1,312.9c-.1-1-.1-2-.2-3L95.5,311c.1,1.2.1,2.4.2,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M124.2,331.8l-.5-3-26.2,3.9.5,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M128.2,253.6l-25.4-7.1-.9,3.4,25.6,6.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M98.8,264.1l26,4.8.6-2.9-25.9-5.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M97.6,271.2l26.1,3.9.5-3-26.1-4.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M132,241.5l-24.8-8.8L106,236l25,8.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M121.8,306.6c0-1,0-2,0-3l-26.4.2c0,1.2,0,2.4.1,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M129.1,250.4l.9-2.9-25.2-8-1,3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M233.5,134.5l-10.1-24.4-3.3,1.4,10.6,24.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M96.6,278.4l26.3,2.9.4-3-26.2-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M95.3,300.1l26.4.2q0-1.5,0-3l-26.4-.7C95.4,297.7,95.3,298.9,95.3,300.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M96,285.6l26.4,2c.1-1,.2-2,.3-3l-26.3-2.6C96.1,283.3,96,284.4,96,285.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M100.2,257l25.8,5.7.7-2.9L101,253.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M385.8,492.4l-10.6-24.2-2.8,1.2,10.1,24.4Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M398.9,486.2l-12.2-23.4-2.7,1.4,11.8,23.7Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M417.6,475.2l-14.6-22-2.5,1.6,14.2,22.3Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M392.4,489.4,381,465.6l-2.7,1.3,10.9,24.1Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M405.2,482.7l-13.1-23-2.6,1.5,12.6,23.3Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M411.5,479.1l-13.8-22.5-2.6,1.6,13.4,22.8Z" transform="translate(-27.9 -26.9)" fill="#f39124"/>
    <path d="M482,407.4,459.2,394l-1.5,2.6,22.5,13.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M485.5,401.1l-23.3-12.6-1.5,2.6,23,13.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M510.5,311.1l-26.4-1.1c0,1-.1,2-.2,3l26.4,1.7C510.4,313.4,510.4,312.2,510.5,311.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M460.9,436.9l-20.1-17.1-2,2.3,19.8,17.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M502.2,361l-25.4-7.5-.9,2.9,25.2,8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M478.2,413.6l-22.3-14.2-1.6,2.5,22,14.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M456.1,442.3l-19.5-17.8-2,2.2,19.1,18.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M494.9,381.5l-24.4-10.1-1.2,2.8,24.2,10.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M469.9,425.5l-21.3-15.7-1.8,2.4,20.9,16.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M497.6,374.8l-24.8-9.2-1.1,2.8,24.6,9.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M500,367.9l-25.1-8.3-1,2.8,24.9,8.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M510,318.3l-26.4-2c-.1,1-.2,2-.3,3l26.3,2.6C509.9,320.7,509.9,319.5,510,318.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M492,388.1l-24.1-10.9-1.3,2.7,23.8,11.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M488.9,394.7l-23.7-11.8-1.4,2.7,23.4,12.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M483.9,291c.1,1,.1,2,.1,3l26.4-1.1c-.1-1.2-.1-2.4-.2-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M504.1,354l-25.6-6.6-.8,2.9,25.5,7.1Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M510.7,303.8l-26.4-.2c0,1,0,2,0,3l26.4.7C510.6,306.2,510.7,305,510.7,303.8Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M510.7,300.1c0-1.2,0-2.4,0-3.6l-26.4.7c0,1,0,2,0,3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M465.5,431.3l-20.7-16.4-1.9,2.3L463.3,434Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M507.2,339.9l-26-4.8-.6,2.9,25.9,5.3Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M508.4,332.7l-26.2-3.9-.5,3,26.1,4.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M482.7,278.4l.4,3,26.3-2.9c-.1-1.2-.3-2.4-.4-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M505.8,347,480,341.3l-.7,2.9,25.7,6.2Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M481.8,272.1l.5,3,26.2-3.9c-.2-1.2-.4-2.3-.6-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M483.4,284.7c.1,1,.2,2,.2,3l26.4-2c-.1-1.2-.2-2.4-.3-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M509.4,325.5l-26.3-2.9-.4,3,26.2,3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M474.2,419.6l-21.8-14.9-1.7,2.4,21.5,15.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M474.9,244.3,500,236l-1.2-3.4-24.9,8.9Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M470.5,232.5l24.4-10.1-1.4-3.3-24.2,10.6Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M472.8,238.4l24.8-9.2-1.3-3.3-24.6,9.7Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M467.9,226.7,492,215.8l-1.5-3.2L466.7,224Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M480.7,265.9l.6,2.9,26-4.8-.7-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M479.3,259.7l.7,2.9,25.8-5.7-.8-3.5Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M477.7,253.6l.8,2.9,25.6-6.6-.9-3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <path d="M475.9,247.5l.9,2.9,25.4-7.5-1-3.4Z" transform="translate(-27.9 -26.9)" fill="#14becd"/>
    <circle cx="275.1" cy="275.1" r="274.6" fill="none" stroke="#fff200" stroke-miterlimit="10" style="mix-blend-mode:color-dodge"/>
  </g>
</svg>
    </div>
  </div>
</div>
  <script
  src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
   <script
   src="https://cdnjs.cloudflare.com/ajax/libs/vue/2.1.10/vue.min.js"></script>
   <script
  <div id="jsi-particle-container" class="container"></div>
  <script type="text/javascript">
	new Vue({
  el: '#app',
  data() {
    return {
      x: 0, 
      y: 0
    }
  },
  methods: {
    coords(e) {
      this.x = e.clientX / 10;
      this.y = e.clientY / 10;
    },
  }
})
  </script>
 </body>
</html>
