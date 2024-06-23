/**
 * @param {number[]} gas
 * @param {number[]} cost
 * @return {number}
 */
var canCompleteCircuit = function (gas, cost) {
    const leng = gas.length;
    let total_gas_available = 0,
        total_burnt_gas = 0,
        current_resource = 0,
        start = 0;
    for (let i = 0; i < leng; i++) {
        total_burnt_gas += cost[i];
        total_gas_available += gas[i];
        current_resource += gas[i] - cost[i];
        if (current_resource < 0) {
            start = (i + 1) % leng;
            current_resource = 0;
        }
    }
    if (total_burnt_gas > total_gas_available) return -1;
    else return start;
};
