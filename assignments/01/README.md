# Problem Statement #
## A _C_ program that will produce a list. ##

**The program problem statements:**
Take input from the console as a string that contains one or more English words (eg. apple) in small letters prefixed by **A** or **D** where 'A' stands for _adding_ and 'D' stands for _deleting_. It can take input(s) as argument(s).

   _Example 1_
 
   ```text
    $ ./a.out                              <-- the C output binary.
      Acar Dman                            <-- input(s)
      Add - car                            <-- output      
      Delete - man                         <-- output
      A file created named list.txt        <-- output
    $
   ```

   _Example 2_
 
   ```text
    $ ./a.out                           <-- the C output binary.
      Aapple Dorange Ddog               <-- input(s)
      Add - car                         <-- output      
      Delete - man                      <-- output
      Delete - dog                      <-- output
      A file created named list.txt     <-- output
    $
   ```

   _Example 3_

   ```text
   $ ./a.out Aman Acat Aroad Dlava Ago Agolang Apython  <-- input as argument(s)
     Add - man                                          <-- output          
     Add - cat                                          <-- output          
     Add - road                                         <-- output     
     Delete - lava                                      <-- output
     Add - go                                           <-- output 
     Add - golang                                       <-- output           
     Add - python                                       <-- output
     A file created named list.txt                      <-- output
   $
   ```