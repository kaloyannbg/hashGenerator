void setHash(char *string, char *output) {

    int counter = 0;

    while(string[counter] != '\0') {

        output[counter] = (string[counter] + 1); // ASCCI TABLE LETTER + 1;

        counter++;
    }

    

    output[counter] = '\0';

}