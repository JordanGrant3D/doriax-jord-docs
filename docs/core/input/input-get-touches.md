---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Input
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Input](input.md).getTouches()

Returns all active touch contacts. Each `Touch` holds an `int pointer` id and a [Vector2](../maths/vector2/vector2.md) `position`.

```cpp
static std::vector<Touch> getTouches();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-touches.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-touches.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
