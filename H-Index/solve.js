/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function (citations) {
    citations.sort((a, b) => a - b);
    const leng = citations.length;
    let h = 0,
        tempH;
    for (let i = 0; i < leng; i++) {
        tempH = h;
        h = Math.min(leng - i, citations[i]);
        if (h < tempH) {
            h = tempH;
            break;
        }
    }
    return h;
};
