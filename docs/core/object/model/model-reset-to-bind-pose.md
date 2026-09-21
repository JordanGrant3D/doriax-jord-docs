---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).resetToBindPose()

Resets every imported node back to the bind pose defined in the model file, clearing any programmatic or animation-driven overrides. Useful when switching between animations or after stopping all playback.

```cpp
void resetToBindPose();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-reset-to-bind-pose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-reset-to-bind-pose.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
