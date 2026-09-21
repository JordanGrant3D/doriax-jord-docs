---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).moveTowards(const Vector2& target, float maxDistanceDelta)

Steps toward `target` by at most `maxDistanceDelta`, snapping when closer than the step. Drives frame-rate independent cursor chasing with `speed * deltaTime`.

```cpp
Vector2 moveTowards(const Vector2& target, float maxDistanceDelta) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-move-towards.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-move-towards.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
