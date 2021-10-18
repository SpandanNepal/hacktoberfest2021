/*
    To check if all fields exist in object or not
*/
function checkIfAllFieldsExist(object = {}, requiredFields = []) {
    return [...requiredFields].every(p => object.hasOwnProperty(p))
}

// Example 1
let object1 = {
    event: "Hacktober",
    duration: "1 Month",
    type: "Open Source",
    description: "Hacktoberfest is a celebration open to everyone in our global community."
}
// return true as all fields exist
console.log(checkIfAllFieldsExist(object1, ["event", "duration", "type", "description"]))

// Example 2
let object2 = {
    duration: "1 Month",
    type: "Open Source",
    description: "Hacktoberfest is a celebration open to everyone in our global community."
}

// return false as "event" key is missing
console.log(checkIfAllFieldsExist(object2, ["event", "duration", "type", "description"]))