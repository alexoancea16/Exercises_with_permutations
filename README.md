    Project for certificate - Exercises with permutations (2022 - "Radu Vladescu" Theoretical High School)
- Student: Constantin-Alexandru Oancea
- Guidance teacher: Rodica Pintea

Introduction:
- Permutations is a chapter in 11th grade higher algebra. Sometimes students have difficulty understanding this chapter. Starting from this aspect, I tried to help the students by creating a C++ program. It presents the user with two options: understanding permutation operations and testing knowledge, sufficiently supporting the user's educational act.

Technical requirements:
- In the realization of this project, the programming language used is C++, and the application used is the CodeBlocks development platform, with the GNU GCC compiler.

Using the Application:
- After running the program, it will display the menu for the first time.
- The presented menu offers three options: understand the permutations, check your knowledge and exit the program. The user will type the digit of the option, depending on their preference, followed by the ENTER key to execute the command. If the number typed by the user is invalid (not in the list of options) the program will ask for a valid option again.
- If the chosen option is 1. Understanding permutations, the program will generate a new menu that will present elementary operations with permutations. In case of any chosen option the system will generate a permutation and solve the indicated operation. After pressing any key it will return to the operations menu, then having the possibility to choose any option.
- If you opted for the second option of the initial menu, you will receive a set of 4 grid-type questions to which you are invited to answer. Next the questions will appear. You will have to choose one of the answer options, typing the corresponding letter, then you will find out the correctness of the answer.In the end, you will find out the result of the test.
- After pressing any key you will return to the initial menu. Your options will be able to continue. Option 3 will allow you to exit the program.

Technical details:
- The main menu of the program is built using the do … while() repetitive structure and the switch statement to select one of the code blocks.
- For abstraction and ease of implementation, as well as debugging, I chose to work with subprograms. The central subroutine is "permutation", which aims to generate permutations. As data structures, behind the generated permutations are one-dimensional arrays.
- Regarding the generation of the vector, I used the function rand() and srand() from the cstdlib library, and to get distinct numbers I kept track of the values generated through another vector.
- Another reason why I chose to work with subroutines is the possibility of code reuse, so I could use subroutines several times throughout the application. For example, the most used subprogram is the "display" procedural function.
- For the exercises with permutations we used elementary operations with vectors, such as selection sort.
- Calculations with permutations, as difficult as they are to understand, are easy to implement, using common commands, for example the "composition" subroutine.
- Last but not least, the most fascinating part of the project is the grid test. Each question has its own built-in subroutine, which uses subroutines from permutation operations. The corresponding letter of the correct answer is stored in a char variable, and making wrong answers is done by displaying the correct answer incorrectly or changing it, to exclude the possibility of duplicating correct answers. Regarding the calculation of the score and the correctness of the user's answer, the subprograms: "choose" and "correct" were used.

Conclusions:
- The program can be used successfully and can certainly help students who want to understand this chapter of higher algebra. Given the fact that digitization has taken off, such an application would be used by a large number of users.
- The program definitely needs improvements in the future. The perspective would be the organization of the project on headers and files, the use of good practice rules, the implementation of a graphic interface, and last but not least the application of some advanced knowledge that I hope to study in the future.

For more details you can contact me at: alexandruoancea49@gmail.com





