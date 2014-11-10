To Learn:

Inversion of Control

TDD - test driven development
BDD - 

anti-patterns? service locator and singleton
alternatives to relational databases
stateless vs stateful systems
convention over configuration?
Mocks vs stubs/fakes
What is YAGNI?
What is SOLID?
Dependency injection and inversion of control?
why are interfaces important?
what is a 3 tier app vs a 2 tier app?
Benefits and cons of OOP
Head First Design Patterns
Locking vs lockless concurrency models
Function vs predicate?
Heap vs stack
call to virtual members in the constructor


Uncle Bob's Book Agile Principles, PAtterns, and PRactices in C#

implement several data structures
single responsibility principle

MVP vs MVC vs MVVM? How do they relate?

What is separation of concerns?


Databases
---------
NoSQL (Not Only SQL) -- Simpler in certain cases, horizontal scaling, finer control over availability. The data structure (key-value, graph, or document) is not a relational database format, and may be faster. NoSQL may include a SQL query language. NoSQL often compromises consistency in favor of availability. Atomicity, consistency, isolation, and durability guarantees should all be considered. Key-value include Redis. Document include MongoDB. Column include Cassandra

CouchDB -- NoSQL that uses JSON for data, JavaScript (with MapReduce) for queries, and HTTP for API.

Relational Database Management Systems (RDBMS): Oracle, SQL, MySQL, etc.

Other types include: Plain text file systems, XML or JSON on disk, CSV, VCS, etc.

Redis -- Keys can contain strings, hashes, lists, sets, sorted setes, bitmaps, and hyperloglogs. You can run atomic operations (append string, incrament value in a hash, push an element, compute intersection of a set, etc. Redis uses an in-memory dataset which can be dumped to disk every so often, or by recording the transaction itself in a log. Persistency can be turned off for a feature-rich, networked, in-memory cache. Trivial to set up master/slave async replication, etc.

[1] http://en.wikipedia.org/wiki/NoSQL
[2] http://redis.io/topics/introduction
