function nCr(n, r){ // n represents row number and r represents column number.
    let res = 1;
    for (let i = 0; i<r; i++){
        res = res*(n-i); // This line multiplies the current value of res by n - i. This represents the numerator of the nCr formula (n choose r).
        res = res/(i+1); // We have taken this approach to avoid the ambiguous time complexity.
    }
    return res;
}
function pascalTriangle(r, c){
    const element = nCr(r-1, c-1);
    return element;
}
const r = 5;
const c = 3;
const element = pascalTriangle(r, c);
console.log('Element at position (${r}, ${c}) is: ${element}');