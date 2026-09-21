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

## [Vector3](vector3.md).length()

Magnitude of the vector: `sqrt(x*x + y*y + z*z)`. CharacterController uses it to test `inputDir.length() > 0.1f` and `camForward.length() > 0.001f`.

```cpp
float length() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-length.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
