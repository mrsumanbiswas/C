# Problem Statement #
## A _C_ program that will produce a list. ##

**The program problem statements:**
Take input from the console as a string that contains one or more English words (eg. apple) in small letters prefixed by **A** or **D** where 'A' stands for _adding_ and 'D' stands for _deleting_.

   _Example 1_
 
   ```bash
    $ ./a.out                              <-- the C output binary.
      Acar Dman                            <-- input(s)
      Add - car                            <-- output      
      Delete - man                         <-- output
      a file created named list.txt        <-- output
    $
   ```

   _Example 2_
 
   ```bash
    $ ./a.out                           <-- the C output binary.
      Aapple Dorange Ddog               <-- input(s)
      Add - car                         <-- output      
      Delete - man                      <-- output
      Delete - dog                      <-- output
      a file created named list.txt     <-- output
    $
   ```