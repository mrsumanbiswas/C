# Problem Statement #
## A _C_ program that will produce a list. ##

**The program problem statements:**
Take input from the console as a string that contains one or more English words (eg. apple) in small letters prefixed by **A** or **D** where 'A' stands for _adding_ and 'D' stands for _deleting_. It  takes input(s) as argument(s). Invalid argument(s) or input(s) will be overlooked. If list.txt already exists then it will update that. If the word(s) to delete is not present then it will overlook that. If the word(s) to add is already present then it will overlook that.

   _Example 1_
 
   ```bash
    $ ./a.out  Acar Aman                   <-- the C output binary.
      Add - car                            <-- output      
      Add - man                            <-- output
      A file generated named list.txt      <-- output
    $
   ```

   _Example 2_
   > It extends the example 1
 
   ```bash
    $ ls
      a.out list.txt ...
    $ ./a.out Aapple Dorange Dman Ddog Anow       <-- the C output binary.
      Add - apple                                 <-- output      
      Delete - man                                <-- output
      Add - now                                   <-- output
      list.txt updated                            <-- output
    $
   ```

   _Example 3_

   ```bash
   $ ./a.out Aman Asun Aroad Dlava Ago Agolang Apython  <-- input as argument(s)
     Add - man                                          <-- output          
     Add - sun                                          <-- output          
     Add - road                                         <-- output     
     Delete - lava                                      <-- output
     Add - go                                           <-- output 
     Add - golang                                       <-- output           
     Add - python                                       <-- output
     A file generated named list.txt                    <-- output
   $
   ```

   _Example 4_

   ```bash
   $ ./a.out Acreated Aby Asuman Abiswas        <-- input as argument(s)
     Add -  created                             <-- output
     Add -  by                                  <-- output
     Add -  suman                               <-- output
     Add -  biswas                              <-- output
     A file generated named list.txt            <-- output
   $ ls                                         <-- listing out the directory
     a.out list.txt ...                         <-- file(s) and folder(s)
   $ cat list.txt                               <-- viewing the list.txt file
     created
     by
     suman
     biswas
   ```