/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
        if(functions.length==0) return x;
        let s=x;
        for(const fun of functions.reverse()){
            s=fun(s);
        }
        return s;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */