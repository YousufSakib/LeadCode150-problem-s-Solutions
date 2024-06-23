class RandomizedSet {
    constructor() {
        this.arr = [];
        this.mp = new Map();
    }
    insert = function (val) {
        if (this.mp.get(val) !== undefined) return false;
        this.mp.set(val, this.arr.length);
        this.arr.push(val);
        return true;
    };

    remove = function (val) {
        let valI = this.mp.get(val);
        if (valI === undefined) return false;
        this.mp.delete(val);
        let lE = this.arr.pop();
        if (val === lE) return true;
        this.arr[valI] = lE;
        this.mp.set(lE, valI);
        return true;
    };

    getRandom = function () {
        let min = 0,
            max = this.arr.length - 1;
        return this.arr[Math.floor(Math.random() * (max - min + 1)) + min];
    };
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * var obj = new RandomizedSet()
 * var param_1 = obj.insert(val)
 * var param_2 = obj.remove(val)
 * var param_3 = obj.getRandom()
 */
