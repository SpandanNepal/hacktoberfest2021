/*
    Execute async queries in a loop sequentially
*/
for(let i=1; i <= 10; i++) {
    const delay = 1000
    for(let j=0; j<i; j++) {
        setTimeout(() => {
            // Perform async task here..
            console.log({
                i,
                j
            })
        }, delay * i);
    }
}