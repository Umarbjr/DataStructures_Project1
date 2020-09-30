Program #1

Name: Umar Balogun Mohammed

COSC 2030

Section # 11

Competing: YES

Best run time: 967.53 on the Linux.
  To Compile: g++ ProgAss1.cpp

Anything that doesn't work: The averages seem to be off. Otherwise, it's all good.


---
grading 98/100<BR>
* github, compiles, and  run (10 points ) yes
* cover page correct (2 points) yes
* readme updated and correct (2 points) yes
* data structure is an Linked list (25 points) yes
  * issues in the data structure like the destructor
* cleaword method ( 12 points) yes
* read dictionary (5 points)
  * why read the dictionary into a vector and then do nothing with it?  just read into the list.
  * calls clean word
* reads book (5 points) yes
  * calls clean word
* skipped correct ( 5 points) yes
* spelling checking code correct (10 points) yes
* compare counts are correct (10 points) yes
  * no floats will overflow.  need to be long double or long long int -2
* format/output correct (10 points) yes
  * spelled and misspelled
  * misspelled file? yes
* timing code and run time (4 points) yes
* competing, extra credit: DQ'd

and Notes:<BR>
* seg fault on PI  after dictionary size.  DQ'd
* but it runs on the hive.  I'm guessing you didn't test it a Pi.  I think you ran out of memory actually.  the linux mahcines have a lot more memory.  
  * also very slow on the fish, so likely never gotten any points.
* why are all you values floats instead of integers or long long int?  -2
