import Table from 'cli-table'

const calculateRootUsingBisection = (
	equalation: (num: number) => number,
	validate: (currentNumber: number, prevNumber: number) => boolean,
	a: number,
	b: number,
): number | number[][] => {
	const negRoots = [a];
	const posRoots = [b];
	const roots:number[] = [];
	const answers: number[] = [];
	for (let i = 0; i < 100; i++) {
		const mid = Math.round(((a + b) / 2)*1000) / 1000;
		const midValue = Math.round(equalation(mid) * 10000) / 10000;

        roots.push(mid);
		answers.push(midValue);

		if (midValue === 0) {
			return mid;
		} else if (midValue > 0) {
            posRoots.push(mid);
            negRoots.push(negRoots[ negRoots.length - 1 ]);
			b = mid;
		} else {
            negRoots.push(mid);
            posRoots.push(posRoots[ posRoots.length - 1 ]);
			a = mid;
		}
		if (roots.length > 2) {
            if (validate(mid, roots[ roots.length - 2 ])) {
				return [
					negRoots.filter((v) => !isNaN(v)),
					posRoots.filter((v) => !isNaN(v)),
					roots.filter((v) => !isNaN(v)),
					answers.filter((v) => !isNaN(v)),
				];
			}
		}
	}
	return [
		negRoots.filter((v) => !isNaN(v)),
		posRoots.filter((v) => !isNaN(v)),
		roots.filter((v) => !isNaN(v)),
		answers.filter((v) => !isNaN(v)),
	];
};

const calculateRootUsingNewtonRaphson = (
    equalation: (num: number) => number,
    validate: (currentNumber: number, prevNumber: number) => boolean,
    a: number,
    equalationDerivative: (num: number) => number,
): number | number[][] => {
    const equalationRoots: number[] = [];
    const equalationDerivativeRoots: number[] = [];
    const roots: number[] = [a];
    for (let i = 0; i < 100; i++) {
        const prevRoot = roots[ roots.length - 1 ];
        const equalationRoot = equalation(prevRoot);
        const equalationDerivativeRoot = equalationDerivative(prevRoot);
        const root = prevRoot - equalationRoot / equalationDerivativeRoot;

        equalationRoots.push(equalationRoot);
        equalationDerivativeRoots.push(equalationDerivativeRoot);
        roots.push(root);
        if(validate(root, prevRoot)) {
            return [roots,equalationRoots,equalationDerivativeRoots];
        }
    };
    return [roots,equalationRoots,equalationDerivativeRoots];

}


const Q2 = (x: number): number => {
	return x ** 3 - 4 * x - 9;
};

const Q2Validate = (x: number, prevX: number): boolean => {
	return x.toFixed(3) === prevX.toFixed(3);
};

const printRootsForNewtonRaphson = (roots: number | number[][]): void => {
    const table = new Table({
        head: [ 'Sr no', 'x', 'f(x)', 'f\'(x)', 'x1' ]
    })
    if (typeof roots === 'number') {
        console.log(`The root is ${roots}`)
    }
    else {
        for (let i = 0; i < roots[ 0 ].length; i++) {
            const row = [ i + 1, roots[ 0 ][ i ], roots[ 1 ][ i ], roots[ 2 ][ i ], roots[ 0 ]?.[ i+1 ] ].filter(v => v!==undefined).map(num => num?.toString());
            table.push(row)
        }
        console.log(table.toString())
    }
};

const printRootsForBisection = (roots: number | number[][]): void => {
    const table = new Table({
        head: ['Sr no', 'a', 'b', 'mid', 'f(mid)' ]
    })
    if (typeof roots === 'number') {
        console.log(`The root is ${roots}`)
    }
    else {
        for (let i = 0; i < roots[ 0 ].length; i++) { 
            const row = [i+1, roots[ 0 ][ i ], roots[ 1 ][ i ], roots[ 2 ][ i ], roots[ 3 ][ i ] ].filter(v=>v !== undefined).map(num => num?.toString());
            table.push(row)
        }
        console.log(table.toString())
    }

};

const countDecimalDegits = (num: number): number => {
	const str = num.toString();
	const dotIndex = str.indexOf('.');
	if (dotIndex === -1) {
		return 0;
	}
	return str.length - dotIndex - 1;
};

const formatNumber = (num: number): string => {
	return num?.toFixed(15);
};

const Q3 = (x: number): number => { 
    return x - Math.E ** (-x);
}
const Q3Derivative = (x: number): number => { 
    return 1 + Math.E ** (-x);
}
const Q3Validate = (x: number, prevX: number): boolean => { 
    return x.toFixed(4) === prevX.toFixed(4);
}

printRootsForBisection(calculateRootUsingBisection(Q2, Q2Validate, 2, 3));