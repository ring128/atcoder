import * as fs from "fs";

const cin = fs.readFileSync(0, "utf8").trim().split(/\s+/);
let all = 0;
const N = Number(cin[all++]);
const A : number[] = Array.from(
  {length : N},
  () => Number(cin[all++]),
);
let cnt = 0;
let l = 1e4;
let yn = false;
for(const a of A){
  if(l===a){
    cnt++;
    if(cnt===2){
      yn = true;
    }
  } else {
    l = a;
    cnt = 0;
  }
}
yn ? console.log("Yes") : console.log("No");