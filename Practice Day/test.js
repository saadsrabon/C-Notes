function nameAver(word){

    const wordLength = word.length;
    
    const spaceLength = wordLength -2;

    const firstLetter = word[0];
    const lastLetter = word[wordLength -1];

    console.log((firstLetter + spaceLength + lastLetter).toLowerCase());
}



const result = nameAver("Internationalization");


