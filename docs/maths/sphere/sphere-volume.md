###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).volume()

Returns `4/3 * pi * r^3`, the volume of the sphere. Compares zone sizes or scales splash damage by coverage.

```cpp
float volume() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-volume.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-volume.h"
```
