###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).intersects(const Sphere& other)

Returns `true` when two spheres overlap. Compares aggro bubbles, melee arcs and spawn safety zones against each other.

```cpp
bool intersects(const Sphere& other) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-intersects-sphere.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-intersects-sphere.h"
```
