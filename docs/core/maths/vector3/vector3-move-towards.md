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

## [Vector3](vector3.md).moveTowards(const Vector3& target, float maxDistanceDelta)

Moves toward `target` by at most `maxDistanceDelta`. Returns `target` when closer than the step. Frame-rate independent when passed `speed * deltaTime`.

```cpp
Vector3 moveTowards(const Vector3& target, float maxDistanceDelta) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-move-towards.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-move-towards.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
