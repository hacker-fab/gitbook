# Contribution Guidlines

The goal function of the Hacker Fab is to never debug the same thing twice.

We operate under different constraints from the semiconductor fab industry. This allows us to curb a lot of complexity.

### Goals:

1. Low cost
2. Create the simplest designs possible
   1. Increase reliability
   2. Reduce manufacturing complexity
3. Minimal danger
4. Small size
5. Minimize required infrastructure
6. No cleanroom needed
7. Highly sourcable materials



### Things to include in documentation:

* BOM
* Build instructions
* Required tooling for build
* Required infrastructure
* Pics/diagrams
* CAD
* Testing/Verification
* SOP(s)
* Contact(s) (discord username, email, linkedin, etc.)



### On Improvement

Central to the Hacker Fab is fast turnaround hardware development - it’s in the name. This means extremely fast hardware prototyping, and with that comes the need for iteration. The careful design constraints placed on all projects and focus on documentation enables someone else to iterate on anything developed in the Hacker Fab. Improvement to a V1, V2, Vn of a design means

1. Directly improving upon a tool’s functionality&#x20;
   1. Precision&#x20;
   2. Reliability&#x20;
   3. Throughput&#x20;
   4. New features
   5. Safety

But there are other equally important ways to improve a design. Every tool version should try to be:

2. Easier to manufacture than the last
   1. Reduce number of tools required to manufacture
   2. Reduce # of vendors, lead time, BOM length
3. Better documented than the last
   1. Tool specs as close to first principles as possible
   2. Every tool spec should have a standardized test for others to verify performance
   3. Explain working principles to the detail of variables we can control (no more, no less). Referenced sources.
4. More “closed-loop” than the last
   1. In-situ sensors
   2. Calibration software should be more generalizable (“now you can use any camera…any piezo with draw distance in range X to Y…”)







