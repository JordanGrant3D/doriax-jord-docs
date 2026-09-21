###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).operator=(const Sphere& other)

Copies `center` and `radius` from another sphere. Returns `*this` so assignments chain. Use it to snapshot a zone before resizing it.

```cpp
Sphere& operator=(const Sphere& other);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-operator-assign.h"
```
