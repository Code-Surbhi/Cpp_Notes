/*
    if(condition){}
    else if(condition){}
    else{}
*/

/*
    Logical operators :

    && - and
    || - or
    ! - not
*/

// Nested if-else
/*
    if(condition){
        if(condition){}
        else{}
    }
    else{
        if(conditon){}
        else{}
    }
*/

// Else if ladder
/*
    if(condition){}
    else if(condtion){}
    else if(condtion){}
    else{}
*/

// Short circuit
/*
    if(a>b && a>c) ismai if a>b condition comes out to be false then a>c wala condition koi check ni krta chahe wo true ho na ho

    if(a>b || a>c) ismai if a>b true hogya toh bhi wo a>c wale condition pe nahi jayega because wo true ho ya false fark ni parega.
*/

// Dynamic Declaration
/*
    Code section - Main
    Stack - Variables are created here
    Heap

    when an if block ends , the variables declared there dissapears too.
*/

// Switch Case - if we dont write break then wo fallthrough ka case ban jayega
/*
    Switch(expression){
        case 1: ------
        --------------
        break;

        case 2: ------
        --------------
        break;

        default: -----
        --------------
    }

    ALSO

        Switch(expression){
        case 'a': ------
        --------------
        break;

        case 'b': ------
        --------------
        break;

        default: -----
        --------------
    }
*/

// In cpp only 1 is true rest all values and 0 is false

/*
    Loops -
        1. While - when you do not know the number of times of repetition
        2. Do While - executes atleast one time
        3. For - when you know the number of times of repetition
        4. For Each
*/

/*
    while(condition){
        process;
    }
*/

/*
    do{
        process;
    }while(condition)
*/

/*
    for(initialisation;condition;updation){
        process;
    }

    1. initialisation
    2. condition
    3. process
    4. updation
    5. condition
    6. process
*/