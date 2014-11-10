To Learn:

Types of Development
-------
TDD -- Test Driven Development
BDD -- Behavior Driven Development, feature driven approach to TDD. BDD is TDD done right.
Units of Code -- 
Design by contract -- 

Dependency Injection & Inversion of Control
-------------------------------------------
C++ has templates for developing type based programs, which has the benefit of no introspection overhead at run-time (only at compile-time).

[1] http://adam.younglogic.com/2008/07/dependency-injection-in-c/


Inversion of Control
anti-patterns? service locator and singleton
alternatives to relational databases

stateless vs stateful systems
-----------------------------
Stateless is less complicated and usually scales easier. This is because there is less book-keeping invovled in passing data and content around. Many web technologies relie on g

convention over configuration?
What is YAGNI?

Mocks vs stubs/fakes
--------------------
A distinction between state verification and behavior verification.

[1] http://martinfowler.com/articles/mocksArentStubs.html

What is SOLID?
--------------
SOLID (Single responsibility, Open-closed, Liskov substitution, Interface segregation, and Dependency Inversion) by Bob Martin.
Single responsibility: One class has one responsibility.
Open/closed: Software entiries should be open to extension and closed for modification.
Liskov Substitution: Objects should be replaceable with instances of their subtypes and remain correct (design by contract)
Interface Segregation: Many client-specific interfaces instead of general-purpose interfaces
Dependency Inversion -- Depend upon abstractions, do not depend on concretions (dependency injection is one method)

Why are interfaces important?
-----------------------------
Guarantees an implementation in a derived class.


what is a 3 tier app vs a 2 tier app?
Benefits and cons of OOP
Head First Design Patterns
Locking vs lockless concurrency models
Function vs predicate?
Heap vs stack
call to virtual members in the constructor
Alexandrescu’s Modern C++ Design

Uncle Bob's Book Agile Principles, PAtterns, and PRactices in C#

implement several data structures
single responsibility principle

MVP vs MVC vs MVVM? How do they relate?

What is separation of concerns?
Policy-based design
Contract programming

OOP
---
Beware the danger of quasi-classes [1]. Pseudo-classes are a collection of static members (no object instantiation needed, such as math functions). Useful to wrap in a namespace instead.

Use getters and setters for configuring and determening the configuration of a class or data model (validation, sanitzaiton, etc.). You do not need to pair setters and getters. There should be a reason to expose state changing. Consider that all properties should be set at instantiation (why change it in the middle of what its trying to do? Just make another one. Else you should completely manage the internal consistency of the state. PROTECTION AND ENCAPSULATION!

[1] http://www.idinews.com/quasiClass.pdf

Databases
---------
NoSQL (Not Only SQL) -- Simpler in certain cases, horizontal scaling, finer control over availability. The data structure (key-value, graph, or document) is not a relational database format, and may be faster. NoSQL may include a SQL query language. NoSQL often compromises consistency in favor of availability. Atomicity, consistency, isolation, and durability guarantees should all be considered. Key-value include Redis. Document include MongoDB. Column include Cassandra

CouchDB -- NoSQL that uses JSON for data, JavaScript (with MapReduce) for queries, and HTTP for API.

Relational Database Management Systems (RDBMS): Oracle, SQL, MySQL, etc.

Other types include: Plain text file systems, XML or JSON on disk, CSV, VCS, etc.

Redis -- Keys can contain strings, hashes, lists, sets, sorted setes, bitmaps, and hyperloglogs. You can run atomic operations (append string, incrament value in a hash, push an element, compute intersection of a set, etc. Redis uses an in-memory dataset which can be dumped to disk every so often, or by recording the transaction itself in a log. Persistency can be turned off for a feature-rich, networked, in-memory cache. Trivial to set up master/slave async replication, etc.

[1] http://en.wikipedia.org/wiki/NoSQL
[2] http://redis.io/topics/introduction
