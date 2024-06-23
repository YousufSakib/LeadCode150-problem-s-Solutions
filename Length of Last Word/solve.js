/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
    rws = s.trim();
    arr = rws.split(" ");
    li = arr.length - 1;
    return arr[li].length;
};
