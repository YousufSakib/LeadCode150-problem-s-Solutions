/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
        let pal = "";
        for(let a of s){
            a = a.toLowerCase();
            if(a >= 'a' && a <= 'z' || a >= '0' && a <= '9')pal+=a
        }
        let len = pal.length/2;
        let Lindx = pal.length-1;
        for(let i = 0; i < len; i++){
            if(pal[i] != pal[Lindx-i])return false;
        }return true;
    }

