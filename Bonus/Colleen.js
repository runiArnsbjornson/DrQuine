function fun() {
    console.log(fun.toString())
}

/*
    Quine in js are so easy
*/

!function main() {
/*
    but comment are boring    
*/
fun()
console.log('\n/*\n    Quine in js are so easy\n*/\n\n!' + main + '()')
}()
