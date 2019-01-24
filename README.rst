#################################################################################
Thư viện giao tiếp với cảm biến ánh sáng Light Sensor BH1750 cho Arduino, ESP8266
#################################################################################

:Info: Github <https://github.com/thiminhnhut/sensor-bh1750-arduino>
:Author: Thi Minh Nhựt <thiminhnhut@gmail.com>
:Date: $Date: 24/01/2019 $
:Revision: $Revision: 1.0.0 $
:Description: Thư viện giao tiếp với cảm biến ánh sáng Light Sensor BH1750 cho Arduino, ESP8266

===============================================================================================

.. sectnum::

.. contents:: Nội dung

===============================================================================================

Nội dung thực hiện
******************

Thư viện SensorBH1750
=====================

* Thư mục source: `src <https://github.com/thiminhnhut/sensor-bh1750-arduino/blob/master/src>`_.

  * File `SensorBH1750.h <https://github.com/thiminhnhut/sensor-bh1750-arduino/blob/master/src/SensorBH1750.h>`_:

  .. code::

    SensorBH1750();

    SensorBH1750(byte address);

    bool init();

    bool init(Mode mode);

    float getLux();

  * File `SensorBH1750.cpp <https://github.com/thiminhnhut/sensor-bh1750-arduino/blob/master/src/SensorBH1750.cpp>`_.

* Ví dụ: `demo.ino <https://github.com/thiminhnhut/sensor-bh1750-arduino/blob/master/examples/demo/demo.ino>`_

Chức năng của thư viện SensorBH1750
===================================

* Đọc giá trị cường độ ánh sáng của cảm biến ánh sáng Light Sensor BH1750 GY-30 với Arduino, ESP8266.
