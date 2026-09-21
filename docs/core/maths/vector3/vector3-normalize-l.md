---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).normalizeL()

Normalizes in place like `normalize()`, but returns the original length. One call gives you both the direction and the distance.

```cpp
float normalizeL();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-normalize-l.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-normalize-l.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
