/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function (s, rows) {
    if (rows === 1) return s;
    var out = "";
    const len = s.length;

    for (let i = 1; i <= rows; i++) {
        let rr = rows - i;
        let indx = i - 1;
        for (let j = 1; ; j++) {
            if (indx >= len) break;
            out += s[indx];
            if (i == 1 || i == rows) indx += (rows - 1) * 2;
            else if (j % 2 == 1) indx += rr * 2;
            else if (j % 2 == 0) indx += (i - 1) * 2;
        }
    }
    return out;
};
