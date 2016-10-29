//
// LibSourcey
// Copyright (C) 2005, Sourcey <http://sourcey.com>
//
// LibSourcey is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// LibSourcey is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//

#ifndef SCY_WebRTC_FilePeerConnection_H
#define SCY_WebRTC_FilePeerConnection_H


#include "multiplexmediacapturer.h"

#include "scy/av/mediacapture.h"
#include "scy/webrtc/peerconnection.h"

// #include "webrtc/modules/audio_device/include/audio_device.h"
// #include "webrtc/api/peerconnectioninterface.h"
// #include "webrtc/api/jsep.h"
// #include "webrtc/api/test/fakeconstraints.h"


namespace scy {


class FilePeerConnection: public PeerConnection
{
public:
    FilePeerConnection(PeerConnectionManager* manager, const std::string& peerid, Mode mode);
    virtual ~FilePeerConnection();

    virtual rtc::scoped_refptr<webrtc::MediaStreamInterface> createMediaStream();
        // Create the local media stream.

    virtual void OnIceConnectionChange(webrtc::PeerConnectionInterface::IceConnectionState new_state);

protected:
    MultiplexMediaCapturer _capturer;
};


} // namespace scy


#endif
