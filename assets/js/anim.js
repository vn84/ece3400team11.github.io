const canvas = document.getElementById('amination');

const cx = canvas.getContext('2d');

const resizeFunc = () => {
  canvas.width = canvas.offsetWidth;
  canvas.height = canvas.offsetHeight;
}

window.addEventListener('resize', resizeFunc);
resizeFunc();

const shake = (duration, intensity) => {
  let framesRendered = 0;
  let intervalID = 0;
  const intervalFunc = () => {
    if (framesRendered >= duration) {
      clearInterval(intervalID);
      return;
    }
    
    const xPos = Math.random()*intensity;
    const yPos = Math.random()*intensity;
    canvas.style.left = xPos+"px";
    canvas.style.top = yPos+"px";

    framesRendered++;
  }
  intervalID = setInterval(intervalFunc, 10);
}

const scale = 1.0;

const drawOne = (x,y) => {
  cx.fillStyle = "black";
  cx.font=(Math.floor(200*scale))+"px Noto Sans";
  cx.fillText("1",x,y);
}

const drawTeam = (x,y) => {
  cx.fillStyle = "black";
  cx.font=(Math.floor(200*scale))+"px Noto Sans";
  cx.fillText("Team",x,y);
}

let firstOne = [700,0,0,0];
let secondOne = [800,0,0,0];
let team = [100,0,0,0];
let gravity = 1.8;
let shakeOne = false;
let shakeTwo = false;
let shakeThree = false;

const animateFirstOne = (relativeFrame) => {
  drawOne(firstOne[0], firstOne[1]);
  if (firstOne[1] < 400) {
    firstOne[0]+=firstOne[2];
    firstOne[1]+=firstOne[3];
    firstOne[3]+=gravity;
  } else {
    if (!shakeOne) {
      shakeOne = true;
      shake(10, 10);
    }
    firstOne[1] = 400;
  }
}

const animateSecondOne = (relativeFrame) => {
  if (firstOne[1] >= 400) {
    drawOne(secondOne[0], secondOne[1]);
    if (secondOne[1] < 400) {
      secondOne[0]+=secondOne[2];
      secondOne[1]+=secondOne[3];
      secondOne[3]+=gravity;
    } else {
      if (!shakeTwo) {
        shakeTwo = true;
        shake(10, 10);
      }
      secondOne[1] = 400;
    }
  }
}

const animateTeam = (relativeFrame) => {
  if (secondOne[1] >= 400) {
    drawTeam(team[0], team[1]);
    if (team[1] < 400) {
      team[0]+=team[2];
      team[1]+=team[3];
      team[3]+=gravity;
    } else {
      if (!shakeThree) {
        shakeThree = true;
        shake(40, 10);
      }
      team[1] = 400;
    }
  }
}

let frameNum = 0;
const animate = () => {
  cx.clearRect(0,0, canvas.width, canvas.height);
  animateFirstOne(frameNum);
  animateSecondOne(frameNum);
  animateTeam(frameNum);

  frameNum++;
}

setInterval(animate, 20);