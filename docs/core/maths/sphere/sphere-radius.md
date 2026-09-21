---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).radius

Radius of the sphere. This is the tuning knob for aggro ranges, pickup magnets and spawn safety checks.

```cpp
float radius;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-radius.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-radius.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
