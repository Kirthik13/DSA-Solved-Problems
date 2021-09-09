import React, { Component } from 'react'

export class Message extends Component {
    constructor() {
        super() 
        this.state = {
            message: "hi"
        }
    }
    changeMessage() {
        this.setState({
            message: 'thank u'
        })
    }
    render() {
        return (<div>
            <h1>{this.state.message}</h1>
            <button onClick={() => this.changeMessage()}>Subsricbe</button>
        </div>)
    }
}
