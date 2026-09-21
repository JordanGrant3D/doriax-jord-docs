[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Log
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Log

The static logging API. All five levels take `printf`-style format strings plus
varargs and forward to `System::platformLog`. CharacterController-style scripts
trace state changes with `print`, stream per-frame values with `verbose`, guard
development builds with `debug`, flag recoverable problems with `warn`, and report
fatal ones with `error`.

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**print**](log-print.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char**](https://en.cppreference.com/cpp/keyword/char)* fmt, ... | General message log (always emitted). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**verbose**](log-verbose.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char**](https://en.cppreference.com/cpp/keyword/char)* fmt, ... | Verbose per-frame telemetry log. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**debug**](log-debug.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char**](https://en.cppreference.com/cpp/keyword/char)* fmt, ... | Debug-build-only log (compiled out with `NDEBUG`). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**warn**](log-warn.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char**](https://en.cppreference.com/cpp/keyword/char)* fmt, ... | Recoverable-problem warning log. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**error**](log-error.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**char**](https://en.cppreference.com/cpp/keyword/char)* fmt, ... | Fatal-error log. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
